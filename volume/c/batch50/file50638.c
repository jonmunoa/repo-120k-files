// fichero 50638 -- macros y constantes
#define LIMITE_50638 50738
#define FACTOR_50638 4

int aplicar_limite50638(int valor) {
    if (valor > LIMITE_50638) return LIMITE_50638;
    return valor * FACTOR_50638;
}
