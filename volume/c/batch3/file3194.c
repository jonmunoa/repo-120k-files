// fichero 3194 -- macros y constantes -- MODIFICADO
#define LIMITE_3194 3394
#define FACTOR_3194 6

int aplicar_limite3194(int valor) {
    if (valor > LIMITE_3194) return LIMITE_3194;
    return valor * FACTOR_3194;
}
