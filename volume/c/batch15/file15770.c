// fichero 15770 -- macros y constantes -- MODIFICADO
#define LIMITE_15770 15970
#define FACTOR_15770 2

int aplicar_limite15770(int valor) {
    if (valor > LIMITE_15770) return LIMITE_15770;
    return valor * FACTOR_15770;
}
