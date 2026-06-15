// fichero 5010 -- macros y constantes -- MODIFICADO
#define LIMITE_5010 5210
#define FACTOR_5010 2

int aplicar_limite5010(int valor) {
    if (valor > LIMITE_5010) return LIMITE_5010;
    return valor * FACTOR_5010;
}
