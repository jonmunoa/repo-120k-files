// fichero 48050 -- macros y constantes
#define LIMITE_48050 48150
#define FACTOR_48050 1

int aplicar_limite48050(int valor) {
    if (valor > LIMITE_48050) return LIMITE_48050;
    return valor * FACTOR_48050;
}
