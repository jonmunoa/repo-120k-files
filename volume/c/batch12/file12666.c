// fichero 12666 -- macros y constantes -- MODIFICADO
#define LIMITE_12666 12866
#define FACTOR_12666 3

int aplicar_limite12666(int valor) {
    if (valor > LIMITE_12666) return LIMITE_12666;
    return valor * FACTOR_12666;
}
