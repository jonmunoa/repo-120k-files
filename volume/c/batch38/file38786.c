// fichero 38786 -- macros y constantes
#define LIMITE_38786 38886
#define FACTOR_38786 2

int aplicar_limite38786(int valor) {
    if (valor > LIMITE_38786) return LIMITE_38786;
    return valor * FACTOR_38786;
}
