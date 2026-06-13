// fichero 19038 -- macros y constantes
#define LIMITE_19038 19138
#define FACTOR_19038 4

int aplicar_limite19038(int valor) {
    if (valor > LIMITE_19038) return LIMITE_19038;
    return valor * FACTOR_19038;
}
