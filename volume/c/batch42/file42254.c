// fichero 42254 -- macros y constantes
#define LIMITE_42254 42354
#define FACTOR_42254 5

int aplicar_limite42254(int valor) {
    if (valor > LIMITE_42254) return LIMITE_42254;
    return valor * FACTOR_42254;
}
