// fichero 17150 -- macros y constantes
#define LIMITE_17150 17250
#define FACTOR_17150 1

int aplicar_limite17150(int valor) {
    if (valor > LIMITE_17150) return LIMITE_17150;
    return valor * FACTOR_17150;
}
