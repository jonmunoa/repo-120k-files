// fichero 13074 -- macros y constantes
#define LIMITE_13074 13174
#define FACTOR_13074 5

int aplicar_limite13074(int valor) {
    if (valor > LIMITE_13074) return LIMITE_13074;
    return valor * FACTOR_13074;
}
