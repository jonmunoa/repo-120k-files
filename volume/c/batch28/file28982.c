// fichero 28982 -- macros y constantes -- MODIFICADO
#define LIMITE_28982 29182
#define FACTOR_28982 4

int aplicar_limite28982(int valor) {
    if (valor > LIMITE_28982) return LIMITE_28982;
    return valor * FACTOR_28982;
}
