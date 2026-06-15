// fichero 17302 -- macros y constantes -- MODIFICADO
#define LIMITE_17302 17502
#define FACTOR_17302 4

int aplicar_limite17302(int valor) {
    if (valor > LIMITE_17302) return LIMITE_17302;
    return valor * FACTOR_17302;
}
