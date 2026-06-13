// fichero 44038 -- macros y constantes
#define LIMITE_44038 44138
#define FACTOR_44038 4

int aplicar_limite44038(int valor) {
    if (valor > LIMITE_44038) return LIMITE_44038;
    return valor * FACTOR_44038;
}
