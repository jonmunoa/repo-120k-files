// fichero 18190 -- macros y constantes
#define LIMITE_18190 18290
#define FACTOR_18190 1

int aplicar_limite18190(int valor) {
    if (valor > LIMITE_18190) return LIMITE_18190;
    return valor * FACTOR_18190;
}
