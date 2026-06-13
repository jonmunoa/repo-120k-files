// fichero 19482 -- macros y constantes
#define LIMITE_19482 19582
#define FACTOR_19482 3

int aplicar_limite19482(int valor) {
    if (valor > LIMITE_19482) return LIMITE_19482;
    return valor * FACTOR_19482;
}
