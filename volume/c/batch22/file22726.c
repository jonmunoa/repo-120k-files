// fichero 22726 -- macros y constantes -- MODIFICADO
#define LIMITE_22726 22926
#define FACTOR_22726 3

int aplicar_limite22726(int valor) {
    if (valor > LIMITE_22726) return LIMITE_22726;
    return valor * FACTOR_22726;
}
