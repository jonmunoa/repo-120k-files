// fichero 18042 -- macros y constantes
#define LIMITE_18042 18142
#define FACTOR_18042 3

int aplicar_limite18042(int valor) {
    if (valor > LIMITE_18042) return LIMITE_18042;
    return valor * FACTOR_18042;
}
