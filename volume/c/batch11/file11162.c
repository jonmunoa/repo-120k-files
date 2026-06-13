// fichero 11162 -- macros y constantes
#define LIMITE_11162 11262
#define FACTOR_11162 3

int aplicar_limite11162(int valor) {
    if (valor > LIMITE_11162) return LIMITE_11162;
    return valor * FACTOR_11162;
}
