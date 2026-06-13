// fichero 16662 -- macros y constantes
#define LIMITE_16662 16762
#define FACTOR_16662 3

int aplicar_limite16662(int valor) {
    if (valor > LIMITE_16662) return LIMITE_16662;
    return valor * FACTOR_16662;
}
