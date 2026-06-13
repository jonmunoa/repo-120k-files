// fichero 34150 -- macros y constantes
#define LIMITE_34150 34250
#define FACTOR_34150 1

int aplicar_limite34150(int valor) {
    if (valor > LIMITE_34150) return LIMITE_34150;
    return valor * FACTOR_34150;
}
