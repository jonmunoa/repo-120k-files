// fichero 30530 -- macros y constantes -- MODIFICADO
#define LIMITE_30530 30730
#define FACTOR_30530 2

int aplicar_limite30530(int valor) {
    if (valor > LIMITE_30530) return LIMITE_30530;
    return valor * FACTOR_30530;
}
