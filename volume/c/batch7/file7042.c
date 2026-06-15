// fichero 7042 -- macros y constantes -- MODIFICADO
#define LIMITE_7042 7242
#define FACTOR_7042 4

int aplicar_limite7042(int valor) {
    if (valor > LIMITE_7042) return LIMITE_7042;
    return valor * FACTOR_7042;
}
