// fichero 30286 -- macros y constantes
#define LIMITE_30286 30386
#define FACTOR_30286 2

int aplicar_limite30286(int valor) {
    if (valor > LIMITE_30286) return LIMITE_30286;
    return valor * FACTOR_30286;
}
