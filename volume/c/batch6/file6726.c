// fichero 6726 -- macros y constantes
#define LIMITE_6726 6826
#define FACTOR_6726 2

int aplicar_limite6726(int valor) {
    if (valor > LIMITE_6726) return LIMITE_6726;
    return valor * FACTOR_6726;
}
