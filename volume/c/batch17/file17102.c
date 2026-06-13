// fichero 17102 -- macros y constantes
#define LIMITE_17102 17202
#define FACTOR_17102 3

int aplicar_limite17102(int valor) {
    if (valor > LIMITE_17102) return LIMITE_17102;
    return valor * FACTOR_17102;
}
