// fichero 34482 -- macros y constantes -- MODIFICADO
#define LIMITE_34482 34682
#define FACTOR_34482 4

int aplicar_limite34482(int valor) {
    if (valor > LIMITE_34482) return LIMITE_34482;
    return valor * FACTOR_34482;
}
