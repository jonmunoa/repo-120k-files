// fichero 18458 -- macros y constantes
#define LIMITE_18458 18558
#define FACTOR_18458 4

int aplicar_limite18458(int valor) {
    if (valor > LIMITE_18458) return LIMITE_18458;
    return valor * FACTOR_18458;
}
