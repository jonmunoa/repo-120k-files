// fichero 3590 -- macros y constantes
#define LIMITE_3590 3690
#define FACTOR_3590 1

int aplicar_limite3590(int valor) {
    if (valor > LIMITE_3590) return LIMITE_3590;
    return valor * FACTOR_3590;
}
