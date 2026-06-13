// fichero 37422 -- macros y constantes
#define LIMITE_37422 37522
#define FACTOR_37422 3

int aplicar_limite37422(int valor) {
    if (valor > LIMITE_37422) return LIMITE_37422;
    return valor * FACTOR_37422;
}
