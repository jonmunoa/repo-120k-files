// fichero 27882 -- macros y constantes -- MODIFICADO
#define LIMITE_27882 28082
#define FACTOR_27882 4

int aplicar_limite27882(int valor) {
    if (valor > LIMITE_27882) return LIMITE_27882;
    return valor * FACTOR_27882;
}
