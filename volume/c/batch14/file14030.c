// fichero 14030 -- macros y constantes -- MODIFICADO
#define LIMITE_14030 14230
#define FACTOR_14030 2

int aplicar_limite14030(int valor) {
    if (valor > LIMITE_14030) return LIMITE_14030;
    return valor * FACTOR_14030;
}
