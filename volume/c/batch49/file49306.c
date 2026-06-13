// fichero 49306 -- macros y constantes
#define LIMITE_49306 49406
#define FACTOR_49306 2

int aplicar_limite49306(int valor) {
    if (valor > LIMITE_49306) return LIMITE_49306;
    return valor * FACTOR_49306;
}
