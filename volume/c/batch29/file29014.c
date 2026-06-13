// fichero 29014 -- macros y constantes
#define LIMITE_29014 29114
#define FACTOR_29014 5

int aplicar_limite29014(int valor) {
    if (valor > LIMITE_29014) return LIMITE_29014;
    return valor * FACTOR_29014;
}
