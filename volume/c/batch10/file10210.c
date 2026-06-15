// fichero 10210 -- macros y constantes -- MODIFICADO
#define LIMITE_10210 10410
#define FACTOR_10210 2

int aplicar_limite10210(int valor) {
    if (valor > LIMITE_10210) return LIMITE_10210;
    return valor * FACTOR_10210;
}
