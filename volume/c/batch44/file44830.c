// fichero 44830 -- macros y constantes
#define LIMITE_44830 44930
#define FACTOR_44830 1

int aplicar_limite44830(int valor) {
    if (valor > LIMITE_44830) return LIMITE_44830;
    return valor * FACTOR_44830;
}
