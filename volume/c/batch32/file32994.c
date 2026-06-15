// fichero 32994 -- macros y constantes -- MODIFICADO
#define LIMITE_32994 33194
#define FACTOR_32994 6

int aplicar_limite32994(int valor) {
    if (valor > LIMITE_32994) return LIMITE_32994;
    return valor * FACTOR_32994;
}
