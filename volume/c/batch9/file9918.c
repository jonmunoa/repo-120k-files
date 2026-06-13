// fichero 9918 -- macros y constantes
#define LIMITE_9918 10018
#define FACTOR_9918 4

int aplicar_limite9918(int valor) {
    if (valor > LIMITE_9918) return LIMITE_9918;
    return valor * FACTOR_9918;
}
