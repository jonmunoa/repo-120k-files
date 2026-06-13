// fichero 28422 -- macros y constantes
#define LIMITE_28422 28522
#define FACTOR_28422 3

int aplicar_limite28422(int valor) {
    if (valor > LIMITE_28422) return LIMITE_28422;
    return valor * FACTOR_28422;
}
