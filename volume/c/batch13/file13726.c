// fichero 13726 -- macros y constantes
#define LIMITE_13726 13826
#define FACTOR_13726 2

int aplicar_limite13726(int valor) {
    if (valor > LIMITE_13726) return LIMITE_13726;
    return valor * FACTOR_13726;
}
