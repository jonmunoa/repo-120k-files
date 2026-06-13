// fichero 23306 -- macros y constantes
#define LIMITE_23306 23406
#define FACTOR_23306 2

int aplicar_limite23306(int valor) {
    if (valor > LIMITE_23306) return LIMITE_23306;
    return valor * FACTOR_23306;
}
