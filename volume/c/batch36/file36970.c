// fichero 36970 -- macros y constantes -- MODIFICADO
#define LIMITE_36970 37170
#define FACTOR_36970 2

int aplicar_limite36970(int valor) {
    if (valor > LIMITE_36970) return LIMITE_36970;
    return valor * FACTOR_36970;
}
