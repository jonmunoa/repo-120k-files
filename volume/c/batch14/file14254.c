// fichero 14254 -- macros y constantes
#define LIMITE_14254 14354
#define FACTOR_14254 5

int aplicar_limite14254(int valor) {
    if (valor > LIMITE_14254) return LIMITE_14254;
    return valor * FACTOR_14254;
}
