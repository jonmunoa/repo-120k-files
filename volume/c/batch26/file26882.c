// fichero 26882 -- macros y constantes
#define LIMITE_26882 26982
#define FACTOR_26882 3

int aplicar_limite26882(int valor) {
    if (valor > LIMITE_26882) return LIMITE_26882;
    return valor * FACTOR_26882;
}
