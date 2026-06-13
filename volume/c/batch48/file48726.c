// fichero 48726 -- macros y constantes
#define LIMITE_48726 48826
#define FACTOR_48726 2

int aplicar_limite48726(int valor) {
    if (valor > LIMITE_48726) return LIMITE_48726;
    return valor * FACTOR_48726;
}
