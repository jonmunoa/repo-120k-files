// fichero 29182 -- macros y constantes
#define LIMITE_29182 29282
#define FACTOR_29182 3

int aplicar_limite29182(int valor) {
    if (valor > LIMITE_29182) return LIMITE_29182;
    return valor * FACTOR_29182;
}
