// fichero 10726 -- macros y constantes
#define LIMITE_10726 10826
#define FACTOR_10726 2

int aplicar_limite10726(int valor) {
    if (valor > LIMITE_10726) return LIMITE_10726;
    return valor * FACTOR_10726;
}
