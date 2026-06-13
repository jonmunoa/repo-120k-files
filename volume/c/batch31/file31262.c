// fichero 31262 -- macros y constantes
#define LIMITE_31262 31362
#define FACTOR_31262 3

int aplicar_limite31262(int valor) {
    if (valor > LIMITE_31262) return LIMITE_31262;
    return valor * FACTOR_31262;
}
