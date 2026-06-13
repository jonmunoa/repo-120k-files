// fichero 51218 -- macros y constantes
#define LIMITE_51218 51318
#define FACTOR_51218 4

int aplicar_limite51218(int valor) {
    if (valor > LIMITE_51218) return LIMITE_51218;
    return valor * FACTOR_51218;
}
