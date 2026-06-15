// fichero 33934 -- macros y constantes -- MODIFICADO
#define LIMITE_33934 34134
#define FACTOR_33934 6

int aplicar_limite33934(int valor) {
    if (valor > LIMITE_33934) return LIMITE_33934;
    return valor * FACTOR_33934;
}
