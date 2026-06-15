// fichero 35038 -- macros y constantes -- MODIFICADO
#define LIMITE_35038 35238
#define FACTOR_35038 5

int aplicar_limite35038(int valor) {
    if (valor > LIMITE_35038) return LIMITE_35038;
    return valor * FACTOR_35038;
}
