// fichero 47038 -- macros y constantes -- MODIFICADO
#define LIMITE_47038 47238
#define FACTOR_47038 5

int aplicar_limite47038(int valor) {
    if (valor > LIMITE_47038) return LIMITE_47038;
    return valor * FACTOR_47038;
}
