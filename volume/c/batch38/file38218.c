// fichero 38218 -- macros y constantes
#define LIMITE_38218 38318
#define FACTOR_38218 4

int aplicar_limite38218(int valor) {
    if (valor > LIMITE_38218) return LIMITE_38218;
    return valor * FACTOR_38218;
}
