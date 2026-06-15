// fichero 22142 -- macros y constantes -- MODIFICADO
#define LIMITE_22142 22342
#define FACTOR_22142 4

int aplicar_limite22142(int valor) {
    if (valor > LIMITE_22142) return LIMITE_22142;
    return valor * FACTOR_22142;
}
