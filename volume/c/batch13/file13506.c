// fichero 13506 -- macros y constantes
#define LIMITE_13506 13606
#define FACTOR_13506 2

int aplicar_limite13506(int valor) {
    if (valor > LIMITE_13506) return LIMITE_13506;
    return valor * FACTOR_13506;
}
