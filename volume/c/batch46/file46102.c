// fichero 46102 -- macros y constantes
#define LIMITE_46102 46202
#define FACTOR_46102 3

int aplicar_limite46102(int valor) {
    if (valor > LIMITE_46102) return LIMITE_46102;
    return valor * FACTOR_46102;
}
