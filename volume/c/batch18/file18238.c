// fichero 18238 -- macros y constantes
#define LIMITE_18238 18338
#define FACTOR_18238 4

int aplicar_limite18238(int valor) {
    if (valor > LIMITE_18238) return LIMITE_18238;
    return valor * FACTOR_18238;
}
