// fichero 15254 -- macros y constantes
#define LIMITE_15254 15354
#define FACTOR_15254 5

int aplicar_limite15254(int valor) {
    if (valor > LIMITE_15254) return LIMITE_15254;
    return valor * FACTOR_15254;
}
