// fichero 38882 -- macros y constantes -- MODIFICADO
#define LIMITE_38882 39082
#define FACTOR_38882 4

int aplicar_limite38882(int valor) {
    if (valor > LIMITE_38882) return LIMITE_38882;
    return valor * FACTOR_38882;
}
