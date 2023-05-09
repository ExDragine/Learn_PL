local string1 = "Nothing can be eternity \n"

print(string.upper(string1))
print(string.lower(string1))
print(string.gsub(string1, "can", "could"))
print(string.find(string1, "eternity", 1))
print(string.reverse(string1))
print(string.format("Moon has %d years old", 4.6e10))
print(string.byte("Near"))
print(string.char(102, 97, 114))
print(string.len(string1))
print(string.rep(string1, 3))
print("Tea" .. "Con")
for word in string.gmatch(string1, "%a+") do print(word) end
