// fichero 3606 -- macros y constantes -- MODIFICADO
#define LIMITE_3606 3806
#define FACTOR_3606 3

int aplicar_limite3606(int valor) {
    if (valor > LIMITE_3606) return LIMITE_3606;
    return valor * FACTOR_3606;
}
