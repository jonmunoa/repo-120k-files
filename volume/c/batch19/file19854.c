// fichero 19854 -- macros y constantes
#define LIMITE_19854 19954
#define FACTOR_19854 5

int aplicar_limite19854(int valor) {
    if (valor > LIMITE_19854) return LIMITE_19854;
    return valor * FACTOR_19854;
}
