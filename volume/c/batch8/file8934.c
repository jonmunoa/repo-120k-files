// fichero 8934 -- macros y constantes -- MODIFICADO
#define LIMITE_8934 9134
#define FACTOR_8934 6

int aplicar_limite8934(int valor) {
    if (valor > LIMITE_8934) return LIMITE_8934;
    return valor * FACTOR_8934;
}
