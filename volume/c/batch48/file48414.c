// fichero 48414 -- macros y constantes
#define LIMITE_48414 48514
#define FACTOR_48414 5

int aplicar_limite48414(int valor) {
    if (valor > LIMITE_48414) return LIMITE_48414;
    return valor * FACTOR_48414;
}
