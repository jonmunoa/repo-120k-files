// fichero 41314 -- macros y constantes
#define LIMITE_41314 41414
#define FACTOR_41314 5

int aplicar_limite41314(int valor) {
    if (valor > LIMITE_41314) return LIMITE_41314;
    return valor * FACTOR_41314;
}
