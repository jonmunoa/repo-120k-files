// fichero 10094 -- macros y constantes -- MODIFICADO
#define LIMITE_10094 10294
#define FACTOR_10094 6

int aplicar_limite10094(int valor) {
    if (valor > LIMITE_10094) return LIMITE_10094;
    return valor * FACTOR_10094;
}
