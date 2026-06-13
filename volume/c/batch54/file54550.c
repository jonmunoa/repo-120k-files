// fichero 54550 -- macros y constantes
#define LIMITE_54550 54650
#define FACTOR_54550 1

int aplicar_limite54550(int valor) {
    if (valor > LIMITE_54550) return LIMITE_54550;
    return valor * FACTOR_54550;
}
