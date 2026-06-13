// fichero 70 -- macros y constantes
#define LIMITE_70 170
#define FACTOR_70 1

int aplicar_limite70(int valor) {
    if (valor > LIMITE_70) return LIMITE_70;
    return valor * FACTOR_70;
}
