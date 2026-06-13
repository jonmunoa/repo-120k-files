// fichero 4030 -- macros y constantes
#define LIMITE_4030 4130
#define FACTOR_4030 1

int aplicar_limite4030(int valor) {
    if (valor > LIMITE_4030) return LIMITE_4030;
    return valor * FACTOR_4030;
}
