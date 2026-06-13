// fichero 41666 -- macros y constantes
#define LIMITE_41666 41766
#define FACTOR_41666 2

int aplicar_limite41666(int valor) {
    if (valor > LIMITE_41666) return LIMITE_41666;
    return valor * FACTOR_41666;
}
