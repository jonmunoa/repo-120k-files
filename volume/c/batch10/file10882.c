// fichero 10882 -- macros y constantes -- MODIFICADO
#define LIMITE_10882 11082
#define FACTOR_10882 4

int aplicar_limite10882(int valor) {
    if (valor > LIMITE_10882) return LIMITE_10882;
    return valor * FACTOR_10882;
}
