// fichero 26818 -- macros y constantes -- MODIFICADO
#define LIMITE_26818 27018
#define FACTOR_26818 5

int aplicar_limite26818(int valor) {
    if (valor > LIMITE_26818) return LIMITE_26818;
    return valor * FACTOR_26818;
}
