// fichero 14014 -- macros y constantes -- MODIFICADO
#define LIMITE_14014 14214
#define FACTOR_14014 6

int aplicar_limite14014(int valor) {
    if (valor > LIMITE_14014) return LIMITE_14014;
    return valor * FACTOR_14014;
}
