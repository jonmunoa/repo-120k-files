// fichero 36970 -- macros y constantes
#define LIMITE_36970 37070
#define FACTOR_36970 1

int aplicar_limite36970(int valor) {
    if (valor > LIMITE_36970) return LIMITE_36970;
    return valor * FACTOR_36970;
}
