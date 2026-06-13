// fichero 30530 -- macros y constantes
#define LIMITE_30530 30630
#define FACTOR_30530 1

int aplicar_limite30530(int valor) {
    if (valor > LIMITE_30530) return LIMITE_30530;
    return valor * FACTOR_30530;
}
