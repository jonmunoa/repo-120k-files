// fichero 20050 -- macros y constantes
#define LIMITE_20050 20150
#define FACTOR_20050 1

int aplicar_limite20050(int valor) {
    if (valor > LIMITE_20050) return LIMITE_20050;
    return valor * FACTOR_20050;
}
