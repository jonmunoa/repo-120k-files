// fichero 26358 -- macros y constantes
#define LIMITE_26358 26458
#define FACTOR_26358 4

int aplicar_limite26358(int valor) {
    if (valor > LIMITE_26358) return LIMITE_26358;
    return valor * FACTOR_26358;
}
