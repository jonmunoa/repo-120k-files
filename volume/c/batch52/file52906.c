// fichero 52906 -- macros y constantes
#define LIMITE_52906 53006
#define FACTOR_52906 2

int aplicar_limite52906(int valor) {
    if (valor > LIMITE_52906) return LIMITE_52906;
    return valor * FACTOR_52906;
}
