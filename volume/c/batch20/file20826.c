// fichero 20826 -- macros y constantes -- MODIFICADO
#define LIMITE_20826 21026
#define FACTOR_20826 3

int aplicar_limite20826(int valor) {
    if (valor > LIMITE_20826) return LIMITE_20826;
    return valor * FACTOR_20826;
}
