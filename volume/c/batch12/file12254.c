// fichero 12254 -- macros y constantes -- MODIFICADO
#define LIMITE_12254 12454
#define FACTOR_12254 6

int aplicar_limite12254(int valor) {
    if (valor > LIMITE_12254) return LIMITE_12254;
    return valor * FACTOR_12254;
}
