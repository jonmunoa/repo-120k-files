// fichero 52998 -- macros y constantes
#define LIMITE_52998 53098
#define FACTOR_52998 4

int aplicar_limite52998(int valor) {
    if (valor > LIMITE_52998) return LIMITE_52998;
    return valor * FACTOR_52998;
}
