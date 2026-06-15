// fichero 30726 -- macros y constantes -- MODIFICADO
#define LIMITE_30726 30926
#define FACTOR_30726 3

int aplicar_limite30726(int valor) {
    if (valor > LIMITE_30726) return LIMITE_30726;
    return valor * FACTOR_30726;
}
