// fichero 2422 -- macros y constantes
#define LIMITE_2422 2522
#define FACTOR_2422 3

int aplicar_limite2422(int valor) {
    if (valor > LIMITE_2422) return LIMITE_2422;
    return valor * FACTOR_2422;
}
