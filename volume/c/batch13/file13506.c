// fichero 13506 -- macros y constantes -- MODIFICADO
#define LIMITE_13506 13706
#define FACTOR_13506 3

int aplicar_limite13506(int valor) {
    if (valor > LIMITE_13506) return LIMITE_13506;
    return valor * FACTOR_13506;
}
