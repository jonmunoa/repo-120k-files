// fichero 24306 -- macros y constantes -- MODIFICADO
#define LIMITE_24306 24506
#define FACTOR_24306 3

int aplicar_limite24306(int valor) {
    if (valor > LIMITE_24306) return LIMITE_24306;
    return valor * FACTOR_24306;
}
