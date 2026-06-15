// fichero 7678 -- macros y constantes -- MODIFICADO
#define LIMITE_7678 7878
#define FACTOR_7678 5

int aplicar_limite7678(int valor) {
    if (valor > LIMITE_7678) return LIMITE_7678;
    return valor * FACTOR_7678;
}
