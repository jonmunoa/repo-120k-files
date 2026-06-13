// fichero 37314 -- macros y constantes
#define LIMITE_37314 37414
#define FACTOR_37314 5

int aplicar_limite37314(int valor) {
    if (valor > LIMITE_37314) return LIMITE_37314;
    return valor * FACTOR_37314;
}
