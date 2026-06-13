// fichero 18254 -- macros y constantes
#define LIMITE_18254 18354
#define FACTOR_18254 5

int aplicar_limite18254(int valor) {
    if (valor > LIMITE_18254) return LIMITE_18254;
    return valor * FACTOR_18254;
}
