// fichero 18558 -- macros y constantes
#define LIMITE_18558 18658
#define FACTOR_18558 4

int aplicar_limite18558(int valor) {
    if (valor > LIMITE_18558) return LIMITE_18558;
    return valor * FACTOR_18558;
}
