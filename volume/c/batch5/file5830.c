// fichero 5830 -- macros y constantes -- MODIFICADO
#define LIMITE_5830 6030
#define FACTOR_5830 2

int aplicar_limite5830(int valor) {
    if (valor > LIMITE_5830) return LIMITE_5830;
    return valor * FACTOR_5830;
}
