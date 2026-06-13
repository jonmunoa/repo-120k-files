// fichero 44358 -- macros y constantes
#define LIMITE_44358 44458
#define FACTOR_44358 4

int aplicar_limite44358(int valor) {
    if (valor > LIMITE_44358) return LIMITE_44358;
    return valor * FACTOR_44358;
}
