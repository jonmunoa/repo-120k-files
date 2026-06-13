// fichero 30306 -- macros y constantes
#define LIMITE_30306 30406
#define FACTOR_30306 2

int aplicar_limite30306(int valor) {
    if (valor > LIMITE_30306) return LIMITE_30306;
    return valor * FACTOR_30306;
}
