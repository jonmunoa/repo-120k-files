// fichero 48030 -- macros y constantes
#define LIMITE_48030 48130
#define FACTOR_48030 1

int aplicar_limite48030(int valor) {
    if (valor > LIMITE_48030) return LIMITE_48030;
    return valor * FACTOR_48030;
}
