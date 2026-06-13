// fichero 28666 -- macros y constantes
#define LIMITE_28666 28766
#define FACTOR_28666 2

int aplicar_limite28666(int valor) {
    if (valor > LIMITE_28666) return LIMITE_28666;
    return valor * FACTOR_28666;
}
