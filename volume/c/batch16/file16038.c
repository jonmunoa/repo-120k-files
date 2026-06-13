// fichero 16038 -- macros y constantes
#define LIMITE_16038 16138
#define FACTOR_16038 4

int aplicar_limite16038(int valor) {
    if (valor > LIMITE_16038) return LIMITE_16038;
    return valor * FACTOR_16038;
}
