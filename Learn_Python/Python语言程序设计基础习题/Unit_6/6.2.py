def compare(list):
    if len(set(list))==len(list):
        return False
    else:
        return True
    
if __name__ == "__main__":
    list = [1,1,2]
    print(compare(list))