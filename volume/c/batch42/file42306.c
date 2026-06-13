// fichero 42306 -- macros y constantes
#define LIMITE_42306 42406
#define FACTOR_42306 2

int aplicar_limite42306(int valor) {
    if (valor > LIMITE_42306) return LIMITE_42306;
    return valor * FACTOR_42306;
}
