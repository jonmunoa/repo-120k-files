// fichero 39662 -- macros y constantes
#define LIMITE_39662 39762
#define FACTOR_39662 3

int aplicar_limite39662(int valor) {
    if (valor > LIMITE_39662) return LIMITE_39662;
    return valor * FACTOR_39662;
}
