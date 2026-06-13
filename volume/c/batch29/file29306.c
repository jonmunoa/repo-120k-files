// fichero 29306 -- macros y constantes
#define LIMITE_29306 29406
#define FACTOR_29306 2

int aplicar_limite29306(int valor) {
    if (valor > LIMITE_29306) return LIMITE_29306;
    return valor * FACTOR_29306;
}
