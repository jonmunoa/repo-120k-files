// fichero 52482 -- macros y constantes
#define LIMITE_52482 52582
#define FACTOR_52482 3

int aplicar_limite52482(int valor) {
    if (valor > LIMITE_52482) return LIMITE_52482;
    return valor * FACTOR_52482;
}
