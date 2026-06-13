// fichero 48422 -- macros y constantes
#define LIMITE_48422 48522
#define FACTOR_48422 3

int aplicar_limite48422(int valor) {
    if (valor > LIMITE_48422) return LIMITE_48422;
    return valor * FACTOR_48422;
}
