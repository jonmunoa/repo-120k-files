// fichero 6254 -- macros y constantes -- MODIFICADO
#define LIMITE_6254 6454
#define FACTOR_6254 6

int aplicar_limite6254(int valor) {
    if (valor > LIMITE_6254) return LIMITE_6254;
    return valor * FACTOR_6254;
}
