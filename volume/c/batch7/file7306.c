// fichero 7306 -- macros y constantes -- MODIFICADO
#define LIMITE_7306 7506
#define FACTOR_7306 3

int aplicar_limite7306(int valor) {
    if (valor > LIMITE_7306) return LIMITE_7306;
    return valor * FACTOR_7306;
}
