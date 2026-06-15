// fichero 4038 -- macros y constantes -- MODIFICADO
#define LIMITE_4038 4238
#define FACTOR_4038 5

int aplicar_limite4038(int valor) {
    if (valor > LIMITE_4038) return LIMITE_4038;
    return valor * FACTOR_4038;
}
