// fichero 48134 -- macros y constantes -- MODIFICADO
#define LIMITE_48134 48334
#define FACTOR_48134 6

int aplicar_limite48134(int valor) {
    if (valor > LIMITE_48134) return LIMITE_48134;
    return valor * FACTOR_48134;
}
