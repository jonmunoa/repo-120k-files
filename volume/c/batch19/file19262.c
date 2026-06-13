// fichero 19262 -- macros y constantes
#define LIMITE_19262 19362
#define FACTOR_19262 3

int aplicar_limite19262(int valor) {
    if (valor > LIMITE_19262) return LIMITE_19262;
    return valor * FACTOR_19262;
}
