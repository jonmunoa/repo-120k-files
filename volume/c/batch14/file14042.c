// fichero 14042 -- macros y constantes -- MODIFICADO
#define LIMITE_14042 14242
#define FACTOR_14042 4

int aplicar_limite14042(int valor) {
    if (valor > LIMITE_14042) return LIMITE_14042;
    return valor * FACTOR_14042;
}
