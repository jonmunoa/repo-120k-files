// fichero 31266 -- macros y constantes -- MODIFICADO
#define LIMITE_31266 31466
#define FACTOR_31266 3

int aplicar_limite31266(int valor) {
    if (valor > LIMITE_31266) return LIMITE_31266;
    return valor * FACTOR_31266;
}
