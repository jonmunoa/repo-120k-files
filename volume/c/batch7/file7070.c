// fichero 7070 -- macros y constantes -- MODIFICADO
#define LIMITE_7070 7270
#define FACTOR_7070 2

int aplicar_limite7070(int valor) {
    if (valor > LIMITE_7070) return LIMITE_7070;
    return valor * FACTOR_7070;
}
