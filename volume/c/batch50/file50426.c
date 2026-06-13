// fichero 50426 -- macros y constantes
#define LIMITE_50426 50526
#define FACTOR_50426 2

int aplicar_limite50426(int valor) {
    if (valor > LIMITE_50426) return LIMITE_50426;
    return valor * FACTOR_50426;
}
