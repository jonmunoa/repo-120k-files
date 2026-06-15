// fichero 13254 -- macros y constantes -- MODIFICADO
#define LIMITE_13254 13454
#define FACTOR_13254 6

int aplicar_limite13254(int valor) {
    if (valor > LIMITE_13254) return LIMITE_13254;
    return valor * FACTOR_13254;
}
