// fichero 3606 -- macros y constantes
#define LIMITE_3606 3706
#define FACTOR_3606 2

int aplicar_limite3606(int valor) {
    if (valor > LIMITE_3606) return LIMITE_3606;
    return valor * FACTOR_3606;
}
