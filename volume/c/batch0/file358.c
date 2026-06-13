// fichero 358 -- macros y constantes
#define LIMITE_358 458
#define FACTOR_358 4

int aplicar_limite358(int valor) {
    if (valor > LIMITE_358) return LIMITE_358;
    return valor * FACTOR_358;
}
