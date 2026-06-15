// fichero 37818 -- macros y constantes -- MODIFICADO
#define LIMITE_37818 38018
#define FACTOR_37818 5

int aplicar_limite37818(int valor) {
    if (valor > LIMITE_37818) return LIMITE_37818;
    return valor * FACTOR_37818;
}
