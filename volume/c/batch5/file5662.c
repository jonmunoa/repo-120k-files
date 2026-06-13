// fichero 5662 -- macros y constantes
#define LIMITE_5662 5762
#define FACTOR_5662 3

int aplicar_limite5662(int valor) {
    if (valor > LIMITE_5662) return LIMITE_5662;
    return valor * FACTOR_5662;
}
