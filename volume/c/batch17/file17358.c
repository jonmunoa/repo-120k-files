// fichero 17358 -- macros y constantes
#define LIMITE_17358 17458
#define FACTOR_17358 4

int aplicar_limite17358(int valor) {
    if (valor > LIMITE_17358) return LIMITE_17358;
    return valor * FACTOR_17358;
}
