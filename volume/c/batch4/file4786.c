// fichero 4786 -- macros y constantes -- MODIFICADO
#define LIMITE_4786 4986
#define FACTOR_4786 3

int aplicar_limite4786(int valor) {
    if (valor > LIMITE_4786) return LIMITE_4786;
    return valor * FACTOR_4786;
}
