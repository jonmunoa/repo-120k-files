// fichero 1174 -- macros y constantes
#define LIMITE_1174 1274
#define FACTOR_1174 5

int aplicar_limite1174(int valor) {
    if (valor > LIMITE_1174) return LIMITE_1174;
    return valor * FACTOR_1174;
}
