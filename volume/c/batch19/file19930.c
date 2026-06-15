// fichero 19930 -- macros y constantes -- MODIFICADO
#define LIMITE_19930 20130
#define FACTOR_19930 2

int aplicar_limite19930(int valor) {
    if (valor > LIMITE_19930) return LIMITE_19930;
    return valor * FACTOR_19930;
}
