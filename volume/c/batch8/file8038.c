// fichero 8038 -- macros y constantes -- MODIFICADO
#define LIMITE_8038 8238
#define FACTOR_8038 5

int aplicar_limite8038(int valor) {
    if (valor > LIMITE_8038) return LIMITE_8038;
    return valor * FACTOR_8038;
}
