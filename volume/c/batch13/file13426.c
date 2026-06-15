// fichero 13426 -- macros y constantes -- MODIFICADO
#define LIMITE_13426 13626
#define FACTOR_13426 3

int aplicar_limite13426(int valor) {
    if (valor > LIMITE_13426) return LIMITE_13426;
    return valor * FACTOR_13426;
}
