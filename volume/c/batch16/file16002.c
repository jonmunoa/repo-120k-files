// fichero 16002 -- macros y constantes
#define LIMITE_16002 16102
#define FACTOR_16002 3

int aplicar_limite16002(int valor) {
    if (valor > LIMITE_16002) return LIMITE_16002;
    return valor * FACTOR_16002;
}
