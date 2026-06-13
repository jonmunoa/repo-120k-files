// fichero 3962 -- macros y constantes
#define LIMITE_3962 4062
#define FACTOR_3962 3

int aplicar_limite3962(int valor) {
    if (valor > LIMITE_3962) return LIMITE_3962;
    return valor * FACTOR_3962;
}
