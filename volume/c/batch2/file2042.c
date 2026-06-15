// fichero 2042 -- macros y constantes -- MODIFICADO
#define LIMITE_2042 2242
#define FACTOR_2042 4

int aplicar_limite2042(int valor) {
    if (valor > LIMITE_2042) return LIMITE_2042;
    return valor * FACTOR_2042;
}
