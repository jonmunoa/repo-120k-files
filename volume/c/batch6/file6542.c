// fichero 6542 -- macros y constantes
#define LIMITE_6542 6642
#define FACTOR_6542 3

int aplicar_limite6542(int valor) {
    if (valor > LIMITE_6542) return LIMITE_6542;
    return valor * FACTOR_6542;
}
