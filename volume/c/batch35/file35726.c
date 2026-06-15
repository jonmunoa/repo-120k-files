// fichero 35726 -- macros y constantes -- MODIFICADO
#define LIMITE_35726 35926
#define FACTOR_35726 3

int aplicar_limite35726(int valor) {
    if (valor > LIMITE_35726) return LIMITE_35726;
    return valor * FACTOR_35726;
}
