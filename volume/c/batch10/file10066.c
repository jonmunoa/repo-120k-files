// fichero 10066 -- macros y constantes -- MODIFICADO
#define LIMITE_10066 10266
#define FACTOR_10066 3

int aplicar_limite10066(int valor) {
    if (valor > LIMITE_10066) return LIMITE_10066;
    return valor * FACTOR_10066;
}
