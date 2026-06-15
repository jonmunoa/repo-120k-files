// fichero 10254 -- macros y constantes -- MODIFICADO
#define LIMITE_10254 10454
#define FACTOR_10254 6

int aplicar_limite10254(int valor) {
    if (valor > LIMITE_10254) return LIMITE_10254;
    return valor * FACTOR_10254;
}
