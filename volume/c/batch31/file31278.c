// fichero 31278 -- macros y constantes
#define LIMITE_31278 31378
#define FACTOR_31278 4

int aplicar_limite31278(int valor) {
    if (valor > LIMITE_31278) return LIMITE_31278;
    return valor * FACTOR_31278;
}
