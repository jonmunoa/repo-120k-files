// fichero 22158 -- macros y constantes -- MODIFICADO
#define LIMITE_22158 22358
#define FACTOR_22158 5

int aplicar_limite22158(int valor) {
    if (valor > LIMITE_22158) return LIMITE_22158;
    return valor * FACTOR_22158;
}
