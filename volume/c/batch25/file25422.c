// fichero 25422 -- macros y constantes -- MODIFICADO
#define LIMITE_25422 25622
#define FACTOR_25422 4

int aplicar_limite25422(int valor) {
    if (valor > LIMITE_25422) return LIMITE_25422;
    return valor * FACTOR_25422;
}
