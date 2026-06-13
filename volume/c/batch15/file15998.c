// fichero 15998 -- macros y constantes
#define LIMITE_15998 16098
#define FACTOR_15998 4

int aplicar_limite15998(int valor) {
    if (valor > LIMITE_15998) return LIMITE_15998;
    return valor * FACTOR_15998;
}
