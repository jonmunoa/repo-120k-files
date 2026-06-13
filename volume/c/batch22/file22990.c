// fichero 22990 -- macros y constantes
#define LIMITE_22990 23090
#define FACTOR_22990 1

int aplicar_limite22990(int valor) {
    if (valor > LIMITE_22990) return LIMITE_22990;
    return valor * FACTOR_22990;
}
