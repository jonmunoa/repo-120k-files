// fichero 40422 -- macros y constantes
#define LIMITE_40422 40522
#define FACTOR_40422 3

int aplicar_limite40422(int valor) {
    if (valor > LIMITE_40422) return LIMITE_40422;
    return valor * FACTOR_40422;
}
