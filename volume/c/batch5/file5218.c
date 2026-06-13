// fichero 5218 -- macros y constantes
#define LIMITE_5218 5318
#define FACTOR_5218 4

int aplicar_limite5218(int valor) {
    if (valor > LIMITE_5218) return LIMITE_5218;
    return valor * FACTOR_5218;
}
