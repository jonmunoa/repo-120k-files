// fichero 13046 -- macros y constantes -- MODIFICADO
#define LIMITE_13046 13246
#define FACTOR_13046 3

int aplicar_limite13046(int valor) {
    if (valor > LIMITE_13046) return LIMITE_13046;
    return valor * FACTOR_13046;
}
