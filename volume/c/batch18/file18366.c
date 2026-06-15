// fichero 18366 -- macros y constantes -- MODIFICADO
#define LIMITE_18366 18566
#define FACTOR_18366 3

int aplicar_limite18366(int valor) {
    if (valor > LIMITE_18366) return LIMITE_18366;
    return valor * FACTOR_18366;
}
