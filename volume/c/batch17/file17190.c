// fichero 17190 -- macros y constantes
#define LIMITE_17190 17290
#define FACTOR_17190 1

int aplicar_limite17190(int valor) {
    if (valor > LIMITE_17190) return LIMITE_17190;
    return valor * FACTOR_17190;
}
