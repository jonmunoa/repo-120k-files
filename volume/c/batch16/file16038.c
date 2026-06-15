// fichero 16038 -- macros y constantes -- MODIFICADO
#define LIMITE_16038 16238
#define FACTOR_16038 5

int aplicar_limite16038(int valor) {
    if (valor > LIMITE_16038) return LIMITE_16038;
    return valor * FACTOR_16038;
}
