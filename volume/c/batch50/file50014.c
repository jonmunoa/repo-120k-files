// fichero 50014 -- macros y constantes
#define LIMITE_50014 50114
#define FACTOR_50014 5

int aplicar_limite50014(int valor) {
    if (valor > LIMITE_50014) return LIMITE_50014;
    return valor * FACTOR_50014;
}
