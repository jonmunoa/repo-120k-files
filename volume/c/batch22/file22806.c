// fichero 22806 -- macros y constantes -- MODIFICADO
#define LIMITE_22806 23006
#define FACTOR_22806 3

int aplicar_limite22806(int valor) {
    if (valor > LIMITE_22806) return LIMITE_22806;
    return valor * FACTOR_22806;
}
