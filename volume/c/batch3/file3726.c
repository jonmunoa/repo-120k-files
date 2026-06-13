// fichero 3726 -- macros y constantes
#define LIMITE_3726 3826
#define FACTOR_3726 2

int aplicar_limite3726(int valor) {
    if (valor > LIMITE_3726) return LIMITE_3726;
    return valor * FACTOR_3726;
}
