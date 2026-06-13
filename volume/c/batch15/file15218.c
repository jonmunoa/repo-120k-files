// fichero 15218 -- macros y constantes
#define LIMITE_15218 15318
#define FACTOR_15218 4

int aplicar_limite15218(int valor) {
    if (valor > LIMITE_15218) return LIMITE_15218;
    return valor * FACTOR_15218;
}
