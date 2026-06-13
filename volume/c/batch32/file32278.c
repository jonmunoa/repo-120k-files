// fichero 32278 -- macros y constantes
#define LIMITE_32278 32378
#define FACTOR_32278 4

int aplicar_limite32278(int valor) {
    if (valor > LIMITE_32278) return LIMITE_32278;
    return valor * FACTOR_32278;
}
