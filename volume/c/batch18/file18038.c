// fichero 18038 -- macros y constantes -- MODIFICADO
#define LIMITE_18038 18238
#define FACTOR_18038 5

int aplicar_limite18038(int valor) {
    if (valor > LIMITE_18038) return LIMITE_18038;
    return valor * FACTOR_18038;
}
