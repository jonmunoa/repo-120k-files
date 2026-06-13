// fichero 15010 -- macros y constantes
#define LIMITE_15010 15110
#define FACTOR_15010 1

int aplicar_limite15010(int valor) {
    if (valor > LIMITE_15010) return LIMITE_15010;
    return valor * FACTOR_15010;
}
