// fichero 3482 -- macros y constantes -- MODIFICADO
#define LIMITE_3482 3682
#define FACTOR_3482 4

int aplicar_limite3482(int valor) {
    if (valor > LIMITE_3482) return LIMITE_3482;
    return valor * FACTOR_3482;
}
