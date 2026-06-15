// fichero 14662 -- macros y constantes -- MODIFICADO
#define LIMITE_14662 14862
#define FACTOR_14662 4

int aplicar_limite14662(int valor) {
    if (valor > LIMITE_14662) return LIMITE_14662;
    return valor * FACTOR_14662;
}
