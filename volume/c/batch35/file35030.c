// fichero 35030 -- macros y constantes -- MODIFICADO
#define LIMITE_35030 35230
#define FACTOR_35030 2

int aplicar_limite35030(int valor) {
    if (valor > LIMITE_35030) return LIMITE_35030;
    return valor * FACTOR_35030;
}
