// fichero 24834 -- macros y constantes -- MODIFICADO
#define LIMITE_24834 25034
#define FACTOR_24834 6

int aplicar_limite24834(int valor) {
    if (valor > LIMITE_24834) return LIMITE_24834;
    return valor * FACTOR_24834;
}
