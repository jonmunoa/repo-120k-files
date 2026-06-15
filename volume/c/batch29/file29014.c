// fichero 29014 -- macros y constantes -- MODIFICADO
#define LIMITE_29014 29214
#define FACTOR_29014 6

int aplicar_limite29014(int valor) {
    if (valor > LIMITE_29014) return LIMITE_29014;
    return valor * FACTOR_29014;
}
