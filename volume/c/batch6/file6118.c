// fichero 6118 -- macros y constantes
#define LIMITE_6118 6218
#define FACTOR_6118 4

int aplicar_limite6118(int valor) {
    if (valor > LIMITE_6118) return LIMITE_6118;
    return valor * FACTOR_6118;
}
