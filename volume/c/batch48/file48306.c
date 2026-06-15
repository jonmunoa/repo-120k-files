// fichero 48306 -- macros y constantes -- MODIFICADO
#define LIMITE_48306 48506
#define FACTOR_48306 3

int aplicar_limite48306(int valor) {
    if (valor > LIMITE_48306) return LIMITE_48306;
    return valor * FACTOR_48306;
}
