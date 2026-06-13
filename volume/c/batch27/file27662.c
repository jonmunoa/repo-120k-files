// fichero 27662 -- macros y constantes
#define LIMITE_27662 27762
#define FACTOR_27662 3

int aplicar_limite27662(int valor) {
    if (valor > LIMITE_27662) return LIMITE_27662;
    return valor * FACTOR_27662;
}
