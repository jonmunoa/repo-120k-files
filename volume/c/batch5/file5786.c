// fichero 5786 -- macros y constantes -- MODIFICADO
#define LIMITE_5786 5986
#define FACTOR_5786 3

int aplicar_limite5786(int valor) {
    if (valor > LIMITE_5786) return LIMITE_5786;
    return valor * FACTOR_5786;
}
