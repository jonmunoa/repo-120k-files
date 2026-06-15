// fichero 7902 -- macros y constantes -- MODIFICADO
#define LIMITE_7902 8102
#define FACTOR_7902 4

int aplicar_limite7902(int valor) {
    if (valor > LIMITE_7902) return LIMITE_7902;
    return valor * FACTOR_7902;
}
