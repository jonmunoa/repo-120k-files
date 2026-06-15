// fichero 34338 -- macros y constantes -- MODIFICADO
#define LIMITE_34338 34538
#define FACTOR_34338 5

int aplicar_limite34338(int valor) {
    if (valor > LIMITE_34338) return LIMITE_34338;
    return valor * FACTOR_34338;
}
