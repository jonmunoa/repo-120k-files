// fichero 32202 -- macros y constantes
#define LIMITE_32202 32302
#define FACTOR_32202 3

int aplicar_limite32202(int valor) {
    if (valor > LIMITE_32202) return LIMITE_32202;
    return valor * FACTOR_32202;
}
