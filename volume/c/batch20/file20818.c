// fichero 20818 -- macros y constantes -- MODIFICADO
#define LIMITE_20818 21018
#define FACTOR_20818 5

int aplicar_limite20818(int valor) {
    if (valor > LIMITE_20818) return LIMITE_20818;
    return valor * FACTOR_20818;
}
