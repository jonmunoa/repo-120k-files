// fichero 17210 -- macros y constantes -- MODIFICADO
#define LIMITE_17210 17410
#define FACTOR_17210 2

int aplicar_limite17210(int valor) {
    if (valor > LIMITE_17210) return LIMITE_17210;
    return valor * FACTOR_17210;
}
