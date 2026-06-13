// fichero 48306 -- macros y constantes
#define LIMITE_48306 48406
#define FACTOR_48306 2

int aplicar_limite48306(int valor) {
    if (valor > LIMITE_48306) return LIMITE_48306;
    return valor * FACTOR_48306;
}
