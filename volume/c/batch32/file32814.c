// fichero 32814 -- macros y constantes
#define LIMITE_32814 32914
#define FACTOR_32814 5

int aplicar_limite32814(int valor) {
    if (valor > LIMITE_32814) return LIMITE_32814;
    return valor * FACTOR_32814;
}
