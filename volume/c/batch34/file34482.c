// fichero 34482 -- macros y constantes
#define LIMITE_34482 34582
#define FACTOR_34482 3

int aplicar_limite34482(int valor) {
    if (valor > LIMITE_34482) return LIMITE_34482;
    return valor * FACTOR_34482;
}
