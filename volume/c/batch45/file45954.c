// fichero 45954 -- macros y constantes
#define LIMITE_45954 46054
#define FACTOR_45954 5

int aplicar_limite45954(int valor) {
    if (valor > LIMITE_45954) return LIMITE_45954;
    return valor * FACTOR_45954;
}
