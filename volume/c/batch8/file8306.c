// fichero 8306 -- macros y constantes
#define LIMITE_8306 8406
#define FACTOR_8306 2

int aplicar_limite8306(int valor) {
    if (valor > LIMITE_8306) return LIMITE_8306;
    return valor * FACTOR_8306;
}
