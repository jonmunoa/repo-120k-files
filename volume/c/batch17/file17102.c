// fichero 17102 -- macros y constantes -- MODIFICADO
#define LIMITE_17102 17302
#define FACTOR_17102 4

int aplicar_limite17102(int valor) {
    if (valor > LIMITE_17102) return LIMITE_17102;
    return valor * FACTOR_17102;
}
