// fichero 44910 -- macros y constantes
#define LIMITE_44910 45010
#define FACTOR_44910 1

int aplicar_limite44910(int valor) {
    if (valor > LIMITE_44910) return LIMITE_44910;
    return valor * FACTOR_44910;
}
