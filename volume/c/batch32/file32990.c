// fichero 32990 -- macros y constantes
#define LIMITE_32990 33090
#define FACTOR_32990 1

int aplicar_limite32990(int valor) {
    if (valor > LIMITE_32990) return LIMITE_32990;
    return valor * FACTOR_32990;
}
