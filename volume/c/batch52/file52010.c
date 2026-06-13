// fichero 52010 -- macros y constantes
#define LIMITE_52010 52110
#define FACTOR_52010 1

int aplicar_limite52010(int valor) {
    if (valor > LIMITE_52010) return LIMITE_52010;
    return valor * FACTOR_52010;
}
