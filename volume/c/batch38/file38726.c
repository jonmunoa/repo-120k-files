// fichero 38726 -- macros y constantes
#define LIMITE_38726 38826
#define FACTOR_38726 2

int aplicar_limite38726(int valor) {
    if (valor > LIMITE_38726) return LIMITE_38726;
    return valor * FACTOR_38726;
}
