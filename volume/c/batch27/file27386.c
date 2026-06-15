// fichero 27386 -- macros y constantes -- MODIFICADO
#define LIMITE_27386 27586
#define FACTOR_27386 3

int aplicar_limite27386(int valor) {
    if (valor > LIMITE_27386) return LIMITE_27386;
    return valor * FACTOR_27386;
}
