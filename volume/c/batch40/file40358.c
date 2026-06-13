// fichero 40358 -- macros y constantes
#define LIMITE_40358 40458
#define FACTOR_40358 4

int aplicar_limite40358(int valor) {
    if (valor > LIMITE_40358) return LIMITE_40358;
    return valor * FACTOR_40358;
}
