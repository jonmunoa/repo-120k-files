// fichero 35422 -- macros y constantes
#define LIMITE_35422 35522
#define FACTOR_35422 3

int aplicar_limite35422(int valor) {
    if (valor > LIMITE_35422) return LIMITE_35422;
    return valor * FACTOR_35422;
}
