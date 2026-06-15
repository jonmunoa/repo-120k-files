// fichero 8726 -- macros y constantes -- MODIFICADO
#define LIMITE_8726 8926
#define FACTOR_8726 3

int aplicar_limite8726(int valor) {
    if (valor > LIMITE_8726) return LIMITE_8726;
    return valor * FACTOR_8726;
}
