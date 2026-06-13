// fichero 48834 -- macros y constantes
#define LIMITE_48834 48934
#define FACTOR_48834 5

int aplicar_limite48834(int valor) {
    if (valor > LIMITE_48834) return LIMITE_48834;
    return valor * FACTOR_48834;
}
