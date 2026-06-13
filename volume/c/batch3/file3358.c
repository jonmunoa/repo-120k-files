// fichero 3358 -- macros y constantes
#define LIMITE_3358 3458
#define FACTOR_3358 4

int aplicar_limite3358(int valor) {
    if (valor > LIMITE_3358) return LIMITE_3358;
    return valor * FACTOR_3358;
}
