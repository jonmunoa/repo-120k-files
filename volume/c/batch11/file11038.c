// fichero 11038 -- macros y constantes -- MODIFICADO
#define LIMITE_11038 11238
#define FACTOR_11038 5

int aplicar_limite11038(int valor) {
    if (valor > LIMITE_11038) return LIMITE_11038;
    return valor * FACTOR_11038;
}
