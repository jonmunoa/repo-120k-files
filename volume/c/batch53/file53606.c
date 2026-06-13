// fichero 53606 -- macros y constantes
#define LIMITE_53606 53706
#define FACTOR_53606 2

int aplicar_limite53606(int valor) {
    if (valor > LIMITE_53606) return LIMITE_53606;
    return valor * FACTOR_53606;
}
