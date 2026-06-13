// fichero 27386 -- macros y constantes
#define LIMITE_27386 27486
#define FACTOR_27386 2

int aplicar_limite27386(int valor) {
    if (valor > LIMITE_27386) return LIMITE_27386;
    return valor * FACTOR_27386;
}
