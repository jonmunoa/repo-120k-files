// fichero 42306 -- macros y constantes -- MODIFICADO
#define LIMITE_42306 42506
#define FACTOR_42306 3

int aplicar_limite42306(int valor) {
    if (valor > LIMITE_42306) return LIMITE_42306;
    return valor * FACTOR_42306;
}
