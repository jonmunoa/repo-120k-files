// fichero 20210 -- macros y constantes -- MODIFICADO
#define LIMITE_20210 20410
#define FACTOR_20210 2

int aplicar_limite20210(int valor) {
    if (valor > LIMITE_20210) return LIMITE_20210;
    return valor * FACTOR_20210;
}
