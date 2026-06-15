// fichero 7038 -- macros y constantes -- MODIFICADO
#define LIMITE_7038 7238
#define FACTOR_7038 5

int aplicar_limite7038(int valor) {
    if (valor > LIMITE_7038) return LIMITE_7038;
    return valor * FACTOR_7038;
}
