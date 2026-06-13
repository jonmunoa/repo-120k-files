// fichero 40998 -- macros y constantes
#define LIMITE_40998 41098
#define FACTOR_40998 4

int aplicar_limite40998(int valor) {
    if (valor > LIMITE_40998) return LIMITE_40998;
    return valor * FACTOR_40998;
}
