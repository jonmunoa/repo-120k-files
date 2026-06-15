// fichero 38926 -- macros y constantes -- MODIFICADO
#define LIMITE_38926 39126
#define FACTOR_38926 3

int aplicar_limite38926(int valor) {
    if (valor > LIMITE_38926) return LIMITE_38926;
    return valor * FACTOR_38926;
}
