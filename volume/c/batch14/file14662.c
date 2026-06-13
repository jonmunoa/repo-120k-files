// fichero 14662 -- macros y constantes
#define LIMITE_14662 14762
#define FACTOR_14662 3

int aplicar_limite14662(int valor) {
    if (valor > LIMITE_14662) return LIMITE_14662;
    return valor * FACTOR_14662;
}
