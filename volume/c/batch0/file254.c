// fichero 254 -- macros y constantes
#define LIMITE_254 354
#define FACTOR_254 5

int aplicar_limite254(int valor) {
    if (valor > LIMITE_254) return LIMITE_254;
    return valor * FACTOR_254;
}
