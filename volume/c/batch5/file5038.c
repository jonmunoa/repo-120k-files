// fichero 5038 -- macros y constantes -- MODIFICADO
#define LIMITE_5038 5238
#define FACTOR_5038 5

int aplicar_limite5038(int valor) {
    if (valor > LIMITE_5038) return LIMITE_5038;
    return valor * FACTOR_5038;
}
