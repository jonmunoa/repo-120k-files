// fichero 21038 -- macros y constantes
#define LIMITE_21038 21138
#define FACTOR_21038 4

int aplicar_limite21038(int valor) {
    if (valor > LIMITE_21038) return LIMITE_21038;
    return valor * FACTOR_21038;
}
