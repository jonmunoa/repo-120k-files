// fichero 26882 -- macros y constantes -- MODIFICADO
#define LIMITE_26882 27082
#define FACTOR_26882 4

int aplicar_limite26882(int valor) {
    if (valor > LIMITE_26882) return LIMITE_26882;
    return valor * FACTOR_26882;
}
