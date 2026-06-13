// fichero 37414 -- macros y constantes
#define LIMITE_37414 37514
#define FACTOR_37414 5

int aplicar_limite37414(int valor) {
    if (valor > LIMITE_37414) return LIMITE_37414;
    return valor * FACTOR_37414;
}
