// fichero 30306 -- macros y constantes -- MODIFICADO
#define LIMITE_30306 30506
#define FACTOR_30306 3

int aplicar_limite30306(int valor) {
    if (valor > LIMITE_30306) return LIMITE_30306;
    return valor * FACTOR_30306;
}
