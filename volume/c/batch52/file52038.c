// fichero 52038 -- macros y constantes
#define LIMITE_52038 52138
#define FACTOR_52038 4

int aplicar_limite52038(int valor) {
    if (valor > LIMITE_52038) return LIMITE_52038;
    return valor * FACTOR_52038;
}
