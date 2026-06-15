// fichero 13726 -- macros y constantes -- MODIFICADO
#define LIMITE_13726 13926
#define FACTOR_13726 3

int aplicar_limite13726(int valor) {
    if (valor > LIMITE_13726) return LIMITE_13726;
    return valor * FACTOR_13726;
}
