// fichero 16342 -- macros y constantes -- MODIFICADO
#define LIMITE_16342 16542
#define FACTOR_16342 4

int aplicar_limite16342(int valor) {
    if (valor > LIMITE_16342) return LIMITE_16342;
    return valor * FACTOR_16342;
}
