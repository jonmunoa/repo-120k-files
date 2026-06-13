// fichero 10194 -- macros y constantes
#define LIMITE_10194 10294
#define FACTOR_10194 5

int aplicar_limite10194(int valor) {
    if (valor > LIMITE_10194) return LIMITE_10194;
    return valor * FACTOR_10194;
}
