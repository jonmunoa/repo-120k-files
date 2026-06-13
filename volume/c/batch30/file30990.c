// fichero 30990 -- macros y constantes
#define LIMITE_30990 31090
#define FACTOR_30990 1

int aplicar_limite30990(int valor) {
    if (valor > LIMITE_30990) return LIMITE_30990;
    return valor * FACTOR_30990;
}
