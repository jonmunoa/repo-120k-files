// fichero 19134 -- macros y constantes -- MODIFICADO
#define LIMITE_19134 19334
#define FACTOR_19134 6

int aplicar_limite19134(int valor) {
    if (valor > LIMITE_19134) return LIMITE_19134;
    return valor * FACTOR_19134;
}
