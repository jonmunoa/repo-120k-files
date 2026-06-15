// fichero 10002 -- macros y constantes -- MODIFICADO
#define LIMITE_10002 10202
#define FACTOR_10002 4

int aplicar_limite10002(int valor) {
    if (valor > LIMITE_10002) return LIMITE_10002;
    return valor * FACTOR_10002;
}
