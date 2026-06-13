// fichero 5726 -- macros y constantes
#define LIMITE_5726 5826
#define FACTOR_5726 2

int aplicar_limite5726(int valor) {
    if (valor > LIMITE_5726) return LIMITE_5726;
    return valor * FACTOR_5726;
}
