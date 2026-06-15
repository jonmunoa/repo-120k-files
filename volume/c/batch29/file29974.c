// fichero 29974 -- macros y constantes -- MODIFICADO
#define LIMITE_29974 30174
#define FACTOR_29974 6

int aplicar_limite29974(int valor) {
    if (valor > LIMITE_29974) return LIMITE_29974;
    return valor * FACTOR_29974;
}
