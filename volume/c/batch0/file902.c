// fichero 902 -- macros y constantes -- MODIFICADO
#define LIMITE_902 1102
#define FACTOR_902 4

int aplicar_limite902(int valor) {
    if (valor > LIMITE_902) return LIMITE_902;
    return valor * FACTOR_902;
}
