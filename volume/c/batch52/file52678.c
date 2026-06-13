// fichero 52678 -- macros y constantes
#define LIMITE_52678 52778
#define FACTOR_52678 4

int aplicar_limite52678(int valor) {
    if (valor > LIMITE_52678) return LIMITE_52678;
    return valor * FACTOR_52678;
}
