// fichero 44422 -- macros y constantes
#define LIMITE_44422 44522
#define FACTOR_44422 3

int aplicar_limite44422(int valor) {
    if (valor > LIMITE_44422) return LIMITE_44422;
    return valor * FACTOR_44422;
}
