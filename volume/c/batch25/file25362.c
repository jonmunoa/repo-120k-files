// fichero 25362 -- macros y constantes -- MODIFICADO
#define LIMITE_25362 25562
#define FACTOR_25362 4

int aplicar_limite25362(int valor) {
    if (valor > LIMITE_25362) return LIMITE_25362;
    return valor * FACTOR_25362;
}
