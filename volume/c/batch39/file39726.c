// fichero 39726 -- macros y constantes -- MODIFICADO
#define LIMITE_39726 39926
#define FACTOR_39726 3

int aplicar_limite39726(int valor) {
    if (valor > LIMITE_39726) return LIMITE_39726;
    return valor * FACTOR_39726;
}
