// fichero 37826 -- macros y constantes
#define LIMITE_37826 37926
#define FACTOR_37826 2

int aplicar_limite37826(int valor) {
    if (valor > LIMITE_37826) return LIMITE_37826;
    return valor * FACTOR_37826;
}
