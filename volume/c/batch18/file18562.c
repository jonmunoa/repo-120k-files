// fichero 18562 -- macros y constantes
#define LIMITE_18562 18662
#define FACTOR_18562 3

int aplicar_limite18562(int valor) {
    if (valor > LIMITE_18562) return LIMITE_18562;
    return valor * FACTOR_18562;
}
