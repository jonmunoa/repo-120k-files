// fichero 14818 -- macros y constantes -- MODIFICADO
#define LIMITE_14818 15018
#define FACTOR_14818 5

int aplicar_limite14818(int valor) {
    if (valor > LIMITE_14818) return LIMITE_14818;
    return valor * FACTOR_14818;
}
