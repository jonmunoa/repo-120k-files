// fichero 31038 -- macros y constantes
#define LIMITE_31038 31138
#define FACTOR_31038 4

int aplicar_limite31038(int valor) {
    if (valor > LIMITE_31038) return LIMITE_31038;
    return valor * FACTOR_31038;
}
