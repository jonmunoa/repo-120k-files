// fichero 20358 -- macros y constantes
#define LIMITE_20358 20458
#define FACTOR_20358 4

int aplicar_limite20358(int valor) {
    if (valor > LIMITE_20358) return LIMITE_20358;
    return valor * FACTOR_20358;
}
