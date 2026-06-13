// fichero 7070 -- macros y constantes
#define LIMITE_7070 7170
#define FACTOR_7070 1

int aplicar_limite7070(int valor) {
    if (valor > LIMITE_7070) return LIMITE_7070;
    return valor * FACTOR_7070;
}
