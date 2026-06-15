// fichero 29306 -- macros y constantes -- MODIFICADO
#define LIMITE_29306 29506
#define FACTOR_29306 3

int aplicar_limite29306(int valor) {
    if (valor > LIMITE_29306) return LIMITE_29306;
    return valor * FACTOR_29306;
}
