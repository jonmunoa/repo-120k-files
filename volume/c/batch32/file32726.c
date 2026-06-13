// fichero 32726 -- macros y constantes
#define LIMITE_32726 32826
#define FACTOR_32726 2

int aplicar_limite32726(int valor) {
    if (valor > LIMITE_32726) return LIMITE_32726;
    return valor * FACTOR_32726;
}
