// fichero 53318 -- macros y constantes
#define LIMITE_53318 53418
#define FACTOR_53318 4

int aplicar_limite53318(int valor) {
    if (valor > LIMITE_53318) return LIMITE_53318;
    return valor * FACTOR_53318;
}
