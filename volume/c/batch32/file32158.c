// fichero 32158 -- macros y constantes -- MODIFICADO
#define LIMITE_32158 32358
#define FACTOR_32158 5

int aplicar_limite32158(int valor) {
    if (valor > LIMITE_32158) return LIMITE_32158;
    return valor * FACTOR_32158;
}
