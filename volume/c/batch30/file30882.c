// fichero 30882 -- macros y constantes -- MODIFICADO
#define LIMITE_30882 31082
#define FACTOR_30882 4

int aplicar_limite30882(int valor) {
    if (valor > LIMITE_30882) return LIMITE_30882;
    return valor * FACTOR_30882;
}
