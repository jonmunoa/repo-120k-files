// fichero 17038 -- macros y constantes -- MODIFICADO
#define LIMITE_17038 17238
#define FACTOR_17038 5

int aplicar_limite17038(int valor) {
    if (valor > LIMITE_17038) return LIMITE_17038;
    return valor * FACTOR_17038;
}
