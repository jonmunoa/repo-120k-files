// fichero 21882 -- macros y constantes -- MODIFICADO
#define LIMITE_21882 22082
#define FACTOR_21882 4

int aplicar_limite21882(int valor) {
    if (valor > LIMITE_21882) return LIMITE_21882;
    return valor * FACTOR_21882;
}
