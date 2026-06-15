// fichero 27990 -- macros y constantes -- MODIFICADO
#define LIMITE_27990 28190
#define FACTOR_27990 2

int aplicar_limite27990(int valor) {
    if (valor > LIMITE_27990) return LIMITE_27990;
    return valor * FACTOR_27990;
}
