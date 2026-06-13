// fichero 10254 -- macros y constantes
#define LIMITE_10254 10354
#define FACTOR_10254 5

int aplicar_limite10254(int valor) {
    if (valor > LIMITE_10254) return LIMITE_10254;
    return valor * FACTOR_10254;
}
