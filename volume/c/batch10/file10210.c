// fichero 10210 -- macros y constantes
#define LIMITE_10210 10310
#define FACTOR_10210 1

int aplicar_limite10210(int valor) {
    if (valor > LIMITE_10210) return LIMITE_10210;
    return valor * FACTOR_10210;
}
