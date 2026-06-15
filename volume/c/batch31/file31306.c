// fichero 31306 -- macros y constantes -- MODIFICADO
#define LIMITE_31306 31506
#define FACTOR_31306 3

int aplicar_limite31306(int valor) {
    if (valor > LIMITE_31306) return LIMITE_31306;
    return valor * FACTOR_31306;
}
