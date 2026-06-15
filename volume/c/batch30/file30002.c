// fichero 30002 -- macros y constantes -- MODIFICADO
#define LIMITE_30002 30202
#define FACTOR_30002 4

int aplicar_limite30002(int valor) {
    if (valor > LIMITE_30002) return LIMITE_30002;
    return valor * FACTOR_30002;
}
