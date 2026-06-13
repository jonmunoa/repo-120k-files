// fichero 20482 -- macros y constantes
#define LIMITE_20482 20582
#define FACTOR_20482 3

int aplicar_limite20482(int valor) {
    if (valor > LIMITE_20482) return LIMITE_20482;
    return valor * FACTOR_20482;
}
