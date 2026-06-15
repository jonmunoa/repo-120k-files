// fichero 6786 -- macros y constantes -- MODIFICADO
#define LIMITE_6786 6986
#define FACTOR_6786 3

int aplicar_limite6786(int valor) {
    if (valor > LIMITE_6786) return LIMITE_6786;
    return valor * FACTOR_6786;
}
