// fichero 22030 -- macros y constantes
#define LIMITE_22030 22130
#define FACTOR_22030 1

int aplicar_limite22030(int valor) {
    if (valor > LIMITE_22030) return LIMITE_22030;
    return valor * FACTOR_22030;
}
