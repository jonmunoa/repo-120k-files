// fichero 134 -- macros y constantes -- MODIFICADO
#define LIMITE_134 334
#define FACTOR_134 6

int aplicar_limite134(int valor) {
    if (valor > LIMITE_134) return LIMITE_134;
    return valor * FACTOR_134;
}
