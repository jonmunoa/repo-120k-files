// fichero 10010 -- macros y constantes -- MODIFICADO
#define LIMITE_10010 10210
#define FACTOR_10010 2

int aplicar_limite10010(int valor) {
    if (valor > LIMITE_10010) return LIMITE_10010;
    return valor * FACTOR_10010;
}
