// fichero 32238 -- macros y constantes -- MODIFICADO
#define LIMITE_32238 32438
#define FACTOR_32238 5

int aplicar_limite32238(int valor) {
    if (valor > LIMITE_32238) return LIMITE_32238;
    return valor * FACTOR_32238;
}
