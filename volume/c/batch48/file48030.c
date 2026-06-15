// fichero 48030 -- macros y constantes -- MODIFICADO
#define LIMITE_48030 48230
#define FACTOR_48030 2

int aplicar_limite48030(int valor) {
    if (valor > LIMITE_48030) return LIMITE_48030;
    return valor * FACTOR_48030;
}
