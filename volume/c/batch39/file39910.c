// fichero 39910 -- macros y constantes -- MODIFICADO
#define LIMITE_39910 40110
#define FACTOR_39910 2

int aplicar_limite39910(int valor) {
    if (valor > LIMITE_39910) return LIMITE_39910;
    return valor * FACTOR_39910;
}
