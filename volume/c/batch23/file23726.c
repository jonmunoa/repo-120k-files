// fichero 23726 -- macros y constantes -- MODIFICADO
#define LIMITE_23726 23926
#define FACTOR_23726 3

int aplicar_limite23726(int valor) {
    if (valor > LIMITE_23726) return LIMITE_23726;
    return valor * FACTOR_23726;
}
