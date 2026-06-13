// fichero 6014 -- macros y constantes
#define LIMITE_6014 6114
#define FACTOR_6014 5

int aplicar_limite6014(int valor) {
    if (valor > LIMITE_6014) return LIMITE_6014;
    return valor * FACTOR_6014;
}
