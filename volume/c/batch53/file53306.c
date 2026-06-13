// fichero 53306 -- macros y constantes
#define LIMITE_53306 53406
#define FACTOR_53306 2

int aplicar_limite53306(int valor) {
    if (valor > LIMITE_53306) return LIMITE_53306;
    return valor * FACTOR_53306;
}
