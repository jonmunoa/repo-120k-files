// fichero 10294 -- macros y constantes
#define LIMITE_10294 10394
#define FACTOR_10294 5

int aplicar_limite10294(int valor) {
    if (valor > LIMITE_10294) return LIMITE_10294;
    return valor * FACTOR_10294;
}
