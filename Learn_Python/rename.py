import os

def rename(root):
    folder = os.listdir(root)
    for f in folder:
        name = f.replace(' ','_')
        old = os.path.join(root,f)
        new = os.path.join(root,name)
        os.rename(old,new)

if __name__ == "__main__":
    rename(os.getcwd())