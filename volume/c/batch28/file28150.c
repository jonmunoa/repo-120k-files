// fichero 28150 -- macros y constantes
#define LIMITE_28150 28250
#define FACTOR_28150 1

int aplicar_limite28150(int valor) {
    if (valor > LIMITE_28150) return LIMITE_28150;
    return valor * FACTOR_28150;
}
