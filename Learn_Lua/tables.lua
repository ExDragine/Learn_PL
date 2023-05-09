local mytable = {}

mytable[1] = "Lua"

print(table.concat(mytable))
table.insert(mytable, 2, "Python")
table.remove(mytable, 2)
table.sort(mytable)

mytable = nil
