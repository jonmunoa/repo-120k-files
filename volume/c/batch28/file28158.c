// fichero 28158 -- macros y constantes -- MODIFICADO
#define LIMITE_28158 28358
#define FACTOR_28158 5

int aplicar_limite28158(int valor) {
    if (valor > LIMITE_28158) return LIMITE_28158;
    return valor * FACTOR_28158;
}
