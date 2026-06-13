// fichero 52674 -- macros y constantes
#define LIMITE_52674 52774
#define FACTOR_52674 5

int aplicar_limite52674(int valor) {
    if (valor > LIMITE_52674) return LIMITE_52674;
    return valor * FACTOR_52674;
}
