// fichero 23306 -- macros y constantes -- MODIFICADO
#define LIMITE_23306 23506
#define FACTOR_23306 3

int aplicar_limite23306(int valor) {
    if (valor > LIMITE_23306) return LIMITE_23306;
    return valor * FACTOR_23306;
}
