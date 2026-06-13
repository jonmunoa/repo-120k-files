// fichero 34358 -- macros y constantes
#define LIMITE_34358 34458
#define FACTOR_34358 4

int aplicar_limite34358(int valor) {
    if (valor > LIMITE_34358) return LIMITE_34358;
    return valor * FACTOR_34358;
}
