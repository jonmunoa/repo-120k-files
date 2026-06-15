// fichero 1726 -- macros y constantes -- MODIFICADO
#define LIMITE_1726 1926
#define FACTOR_1726 3

int aplicar_limite1726(int valor) {
    if (valor > LIMITE_1726) return LIMITE_1726;
    return valor * FACTOR_1726;
}
