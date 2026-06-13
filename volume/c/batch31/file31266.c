// fichero 31266 -- macros y constantes
#define LIMITE_31266 31366
#define FACTOR_31266 2

int aplicar_limite31266(int valor) {
    if (valor > LIMITE_31266) return LIMITE_31266;
    return valor * FACTOR_31266;
}
