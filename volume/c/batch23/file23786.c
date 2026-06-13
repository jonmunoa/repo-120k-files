// fichero 23786 -- macros y constantes
#define LIMITE_23786 23886
#define FACTOR_23786 2

int aplicar_limite23786(int valor) {
    if (valor > LIMITE_23786) return LIMITE_23786;
    return valor * FACTOR_23786;
}
