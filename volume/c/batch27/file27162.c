// fichero 27162 -- macros y constantes -- MODIFICADO
#define LIMITE_27162 27362
#define FACTOR_27162 4

int aplicar_limite27162(int valor) {
    if (valor > LIMITE_27162) return LIMITE_27162;
    return valor * FACTOR_27162;
}
