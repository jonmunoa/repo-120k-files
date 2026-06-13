// fichero 31306 -- macros y constantes
#define LIMITE_31306 31406
#define FACTOR_31306 2

int aplicar_limite31306(int valor) {
    if (valor > LIMITE_31306) return LIMITE_31306;
    return valor * FACTOR_31306;
}
