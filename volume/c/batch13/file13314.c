// fichero 13314 -- macros y constantes
#define LIMITE_13314 13414
#define FACTOR_13314 5

int aplicar_limite13314(int valor) {
    if (valor > LIMITE_13314) return LIMITE_13314;
    return valor * FACTOR_13314;
}
