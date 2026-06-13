// fichero 13990 -- macros y constantes
#define LIMITE_13990 14090
#define FACTOR_13990 1

int aplicar_limite13990(int valor) {
    if (valor > LIMITE_13990) return LIMITE_13990;
    return valor * FACTOR_13990;
}
