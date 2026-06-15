// fichero 40818 -- macros y constantes -- MODIFICADO
#define LIMITE_40818 41018
#define FACTOR_40818 5

int aplicar_limite40818(int valor) {
    if (valor > LIMITE_40818) return LIMITE_40818;
    return valor * FACTOR_40818;
}
