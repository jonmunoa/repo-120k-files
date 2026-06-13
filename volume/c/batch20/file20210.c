// fichero 20210 -- macros y constantes
#define LIMITE_20210 20310
#define FACTOR_20210 1

int aplicar_limite20210(int valor) {
    if (valor > LIMITE_20210) return LIMITE_20210;
    return valor * FACTOR_20210;
}
