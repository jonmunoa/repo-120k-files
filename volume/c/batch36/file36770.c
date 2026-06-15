// fichero 36770 -- macros y constantes -- MODIFICADO
#define LIMITE_36770 36970
#define FACTOR_36770 2

int aplicar_limite36770(int valor) {
    if (valor > LIMITE_36770) return LIMITE_36770;
    return valor * FACTOR_36770;
}
