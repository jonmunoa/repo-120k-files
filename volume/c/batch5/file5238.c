// fichero 5238 -- macros y constantes -- MODIFICADO
#define LIMITE_5238 5438
#define FACTOR_5238 5

int aplicar_limite5238(int valor) {
    if (valor > LIMITE_5238) return LIMITE_5238;
    return valor * FACTOR_5238;
}
