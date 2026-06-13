// fichero 45994 -- macros y constantes
#define LIMITE_45994 46094
#define FACTOR_45994 5

int aplicar_limite45994(int valor) {
    if (valor > LIMITE_45994) return LIMITE_45994;
    return valor * FACTOR_45994;
}
