// fichero 26042 -- macros y constantes -- MODIFICADO
#define LIMITE_26042 26242
#define FACTOR_26042 4

int aplicar_limite26042(int valor) {
    if (valor > LIMITE_26042) return LIMITE_26042;
    return valor * FACTOR_26042;
}
