// fichero 4358 -- macros y constantes
#define LIMITE_4358 4458
#define FACTOR_4358 4

int aplicar_limite4358(int valor) {
    if (valor > LIMITE_4358) return LIMITE_4358;
    return valor * FACTOR_4358;
}
