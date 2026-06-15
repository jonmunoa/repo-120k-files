// fichero 30102 -- macros y constantes -- MODIFICADO
#define LIMITE_30102 30302
#define FACTOR_30102 4

int aplicar_limite30102(int valor) {
    if (valor > LIMITE_30102) return LIMITE_30102;
    return valor * FACTOR_30102;
}
