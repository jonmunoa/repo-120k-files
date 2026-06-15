// fichero 45026 -- macros y constantes -- MODIFICADO
#define LIMITE_45026 45226
#define FACTOR_45026 3

int aplicar_limite45026(int valor) {
    if (valor > LIMITE_45026) return LIMITE_45026;
    return valor * FACTOR_45026;
}
