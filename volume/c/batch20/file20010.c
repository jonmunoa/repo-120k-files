// fichero 20010 -- macros y constantes
#define LIMITE_20010 20110
#define FACTOR_20010 1

int aplicar_limite20010(int valor) {
    if (valor > LIMITE_20010) return LIMITE_20010;
    return valor * FACTOR_20010;
}
