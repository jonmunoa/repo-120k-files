// fichero 13038 -- macros y constantes -- MODIFICADO
#define LIMITE_13038 13238
#define FACTOR_13038 5

int aplicar_limite13038(int valor) {
    if (valor > LIMITE_13038) return LIMITE_13038;
    return valor * FACTOR_13038;
}
