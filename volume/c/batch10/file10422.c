// fichero 10422 -- macros y constantes -- MODIFICADO
#define LIMITE_10422 10622
#define FACTOR_10422 4

int aplicar_limite10422(int valor) {
    if (valor > LIMITE_10422) return LIMITE_10422;
    return valor * FACTOR_10422;
}
