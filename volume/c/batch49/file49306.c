// fichero 49306 -- macros y constantes -- MODIFICADO
#define LIMITE_49306 49506
#define FACTOR_49306 3

int aplicar_limite49306(int valor) {
    if (valor > LIMITE_49306) return LIMITE_49306;
    return valor * FACTOR_49306;
}
