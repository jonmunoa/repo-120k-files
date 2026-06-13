// fichero 5238 -- macros y constantes
#define LIMITE_5238 5338
#define FACTOR_5238 4

int aplicar_limite5238(int valor) {
    if (valor > LIMITE_5238) return LIMITE_5238;
    return valor * FACTOR_5238;
}
