// fichero 53482 -- macros y constantes
#define LIMITE_53482 53582
#define FACTOR_53482 3

int aplicar_limite53482(int valor) {
    if (valor > LIMITE_53482) return LIMITE_53482;
    return valor * FACTOR_53482;
}
