// fichero 31994 -- macros y constantes
#define LIMITE_31994 32094
#define FACTOR_31994 5

int aplicar_limite31994(int valor) {
    if (valor > LIMITE_31994) return LIMITE_31994;
    return valor * FACTOR_31994;
}
