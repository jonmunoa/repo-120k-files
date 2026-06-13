// fichero 45990 -- macros y constantes
#define LIMITE_45990 46090
#define FACTOR_45990 1

int aplicar_limite45990(int valor) {
    if (valor > LIMITE_45990) return LIMITE_45990;
    return valor * FACTOR_45990;
}
