// fichero 30162 -- macros y constantes -- MODIFICADO
#define LIMITE_30162 30362
#define FACTOR_30162 4

int aplicar_limite30162(int valor) {
    if (valor > LIMITE_30162) return LIMITE_30162;
    return valor * FACTOR_30162;
}
