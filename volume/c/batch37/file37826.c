// fichero 37826 -- macros y constantes -- MODIFICADO
#define LIMITE_37826 38026
#define FACTOR_37826 3

int aplicar_limite37826(int valor) {
    if (valor > LIMITE_37826) return LIMITE_37826;
    return valor * FACTOR_37826;
}
