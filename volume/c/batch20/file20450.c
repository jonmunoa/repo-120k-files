// fichero 20450 -- macros y constantes
#define LIMITE_20450 20550
#define FACTOR_20450 1

int aplicar_limite20450(int valor) {
    if (valor > LIMITE_20450) return LIMITE_20450;
    return valor * FACTOR_20450;
}
