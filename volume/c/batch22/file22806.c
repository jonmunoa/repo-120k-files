// fichero 22806 -- macros y constantes
#define LIMITE_22806 22906
#define FACTOR_22806 2

int aplicar_limite22806(int valor) {
    if (valor > LIMITE_22806) return LIMITE_22806;
    return valor * FACTOR_22806;
}
