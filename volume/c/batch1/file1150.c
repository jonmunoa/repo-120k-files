// fichero 1150 -- macros y constantes
#define LIMITE_1150 1250
#define FACTOR_1150 1

int aplicar_limite1150(int valor) {
    if (valor > LIMITE_1150) return LIMITE_1150;
    return valor * FACTOR_1150;
}
