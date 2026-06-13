// fichero 21306 -- macros y constantes
#define LIMITE_21306 21406
#define FACTOR_21306 2

int aplicar_limite21306(int valor) {
    if (valor > LIMITE_21306) return LIMITE_21306;
    return valor * FACTOR_21306;
}
