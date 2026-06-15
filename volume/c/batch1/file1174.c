// fichero 1174 -- macros y constantes -- MODIFICADO
#define LIMITE_1174 1374
#define FACTOR_1174 6

int aplicar_limite1174(int valor) {
    if (valor > LIMITE_1174) return LIMITE_1174;
    return valor * FACTOR_1174;
}
