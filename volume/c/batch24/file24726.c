// fichero 24726 -- macros y constantes -- MODIFICADO
#define LIMITE_24726 24926
#define FACTOR_24726 3

int aplicar_limite24726(int valor) {
    if (valor > LIMITE_24726) return LIMITE_24726;
    return valor * FACTOR_24726;
}
