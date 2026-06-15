// fichero 14758 -- macros y constantes -- MODIFICADO
#define LIMITE_14758 14958
#define FACTOR_14758 5

int aplicar_limite14758(int valor) {
    if (valor > LIMITE_14758) return LIMITE_14758;
    return valor * FACTOR_14758;
}
