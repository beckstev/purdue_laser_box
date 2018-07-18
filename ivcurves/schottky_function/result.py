import numpy as np
import uncertainties.unumpy as unp
from scipy.optimize import curve_fit
import matplotlib.pyplot as plt
import scipy.constants as const
from uncertainties import ufloat
from uncertainties.unumpy import nominal_values as noms
from uncertainties.unumpy import std_devs as stds
from scipy.optimize import curve_fit
from scipy import odr
from array import array
import time
import ROOT as root


u_bias_vanilla, i_leak_vanilla_down   = np.genfromtxt('I_V_curve_-30_200.txt', unpack = True)

plt.errorbar(-u_bias_vanilla[41:] ,np.abs(i_leak_vanilla_down[41:]), xerr=u_bias_vanilla[41:] * 0.02, yerr= i_leak_vanilla_down[41:] * 0.22, fmt='x', label = 'Durchlassrichtung')
plt.errorbar(u_bias_vanilla[:41] ,np.abs(i_leak_vanilla_down[:41]), xerr=u_bias_vanilla[:41] * 0.02, yerr= i_leak_vanilla_down[:41] * 0.035, fmt='x', label = 'Sperrichtung')

plt.yscale('log')
plt.legend()
plt.grid()
plt.ylabel(r'$ I \, \, / \, \, \mu\mathrm{A}$')
plt.xlabel(r'$ U_{\mathrm{bias}} \, \, / \, \,  \mathrm{V}$')

#plt.show()
plt.savefig('iv_curve_forward_and_reversebias.pdf')
