// fichero 23450 -- macros y constantes
#define LIMITE_23450 23550
#define FACTOR_23450 1

int aplicar_limite23450(int valor) {
    if (valor > LIMITE_23450) return LIMITE_23450;
    return valor * FACTOR_23450;
}
