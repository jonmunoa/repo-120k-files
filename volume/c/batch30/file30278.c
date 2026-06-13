// fichero 30278 -- macros y constantes
#define LIMITE_30278 30378
#define FACTOR_30278 4

int aplicar_limite30278(int valor) {
    if (valor > LIMITE_30278) return LIMITE_30278;
    return valor * FACTOR_30278;
}
