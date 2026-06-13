// fichero 19358 -- macros y constantes
#define LIMITE_19358 19458
#define FACTOR_19358 4

int aplicar_limite19358(int valor) {
    if (valor > LIMITE_19358) return LIMITE_19358;
    return valor * FACTOR_19358;
}
