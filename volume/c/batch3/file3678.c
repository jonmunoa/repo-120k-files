// fichero 3678 -- macros y constantes
#define LIMITE_3678 3778
#define FACTOR_3678 4

int aplicar_limite3678(int valor) {
    if (valor > LIMITE_3678) return LIMITE_3678;
    return valor * FACTOR_3678;
}
