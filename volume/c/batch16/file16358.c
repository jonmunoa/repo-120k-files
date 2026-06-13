// fichero 16358 -- macros y constantes
#define LIMITE_16358 16458
#define FACTOR_16358 4

int aplicar_limite16358(int valor) {
    if (valor > LIMITE_16358) return LIMITE_16358;
    return valor * FACTOR_16358;
}
