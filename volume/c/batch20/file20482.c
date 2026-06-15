// fichero 20482 -- macros y constantes -- MODIFICADO
#define LIMITE_20482 20682
#define FACTOR_20482 4

int aplicar_limite20482(int valor) {
    if (valor > LIMITE_20482) return LIMITE_20482;
    return valor * FACTOR_20482;
}
