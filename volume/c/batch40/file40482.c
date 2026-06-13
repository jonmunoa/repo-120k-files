// fichero 40482 -- macros y constantes
#define LIMITE_40482 40582
#define FACTOR_40482 3

int aplicar_limite40482(int valor) {
    if (valor > LIMITE_40482) return LIMITE_40482;
    return valor * FACTOR_40482;
}
