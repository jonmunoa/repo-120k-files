// fichero 3934 -- macros y constantes -- MODIFICADO
#define LIMITE_3934 4134
#define FACTOR_3934 6

int aplicar_limite3934(int valor) {
    if (valor > LIMITE_3934) return LIMITE_3934;
    return valor * FACTOR_3934;
}
