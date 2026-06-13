// fichero 53038 -- macros y constantes
#define LIMITE_53038 53138
#define FACTOR_53038 4

int aplicar_limite53038(int valor) {
    if (valor > LIMITE_53038) return LIMITE_53038;
    return valor * FACTOR_53038;
}
