// fichero 23254 -- macros y constantes
#define LIMITE_23254 23354
#define FACTOR_23254 5

int aplicar_limite23254(int valor) {
    if (valor > LIMITE_23254) return LIMITE_23254;
    return valor * FACTOR_23254;
}
