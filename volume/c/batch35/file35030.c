// fichero 35030 -- macros y constantes
#define LIMITE_35030 35130
#define FACTOR_35030 1

int aplicar_limite35030(int valor) {
    if (valor > LIMITE_35030) return LIMITE_35030;
    return valor * FACTOR_35030;
}
