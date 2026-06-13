// fichero 30882 -- macros y constantes
#define LIMITE_30882 30982
#define FACTOR_30882 3

int aplicar_limite30882(int valor) {
    if (valor > LIMITE_30882) return LIMITE_30882;
    return valor * FACTOR_30882;
}
