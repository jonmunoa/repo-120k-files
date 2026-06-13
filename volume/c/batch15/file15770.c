// fichero 15770 -- macros y constantes
#define LIMITE_15770 15870
#define FACTOR_15770 1

int aplicar_limite15770(int valor) {
    if (valor > LIMITE_15770) return LIMITE_15770;
    return valor * FACTOR_15770;
}
