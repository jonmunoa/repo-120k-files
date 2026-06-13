// fichero 52662 -- macros y constantes
#define LIMITE_52662 52762
#define FACTOR_52662 3

int aplicar_limite52662(int valor) {
    if (valor > LIMITE_52662) return LIMITE_52662;
    return valor * FACTOR_52662;
}
