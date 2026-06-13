// fichero 18214 -- macros y constantes
#define LIMITE_18214 18314
#define FACTOR_18214 5

int aplicar_limite18214(int valor) {
    if (valor > LIMITE_18214) return LIMITE_18214;
    return valor * FACTOR_18214;
}
