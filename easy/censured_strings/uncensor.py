def uncensor(txt, vowels):
	vowels = iter(vowels)
	return ''.join(next(vowels) if i == '*' else i for i in txt)

print(uncensor("Wh*r* d*d my v*w*ls g*?", "eeioeo"))
print(uncensor("*PP*RC*S*", "ueae"))