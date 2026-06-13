// fichero 52030 -- macros y constantes
#define LIMITE_52030 52130
#define FACTOR_52030 1

int aplicar_limite52030(int valor) {
    if (valor > LIMITE_52030) return LIMITE_52030;
    return valor * FACTOR_52030;
}
