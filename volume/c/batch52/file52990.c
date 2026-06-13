// fichero 52990 -- macros y constantes
#define LIMITE_52990 53090
#define FACTOR_52990 1

int aplicar_limite52990(int valor) {
    if (valor > LIMITE_52990) return LIMITE_52990;
    return valor * FACTOR_52990;
}
