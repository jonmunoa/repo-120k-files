// fichero 38934 -- macros y constantes -- MODIFICADO
#define LIMITE_38934 39134
#define FACTOR_38934 6

int aplicar_limite38934(int valor) {
    if (valor > LIMITE_38934) return LIMITE_38934;
    return valor * FACTOR_38934;
}
