// fichero 20242 -- macros y constantes
#define LIMITE_20242 20342
#define FACTOR_20242 3

int aplicar_limite20242(int valor) {
    if (valor > LIMITE_20242) return LIMITE_20242;
    return valor * FACTOR_20242;
}
