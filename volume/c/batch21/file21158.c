// fichero 21158 -- macros y constantes -- MODIFICADO
#define LIMITE_21158 21358
#define FACTOR_21158 5

int aplicar_limite21158(int valor) {
    if (valor > LIMITE_21158) return LIMITE_21158;
    return valor * FACTOR_21158;
}
