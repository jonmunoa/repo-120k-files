// fichero 44482 -- macros y constantes -- MODIFICADO
#define LIMITE_44482 44682
#define FACTOR_44482 4

int aplicar_limite44482(int valor) {
    if (valor > LIMITE_44482) return LIMITE_44482;
    return valor * FACTOR_44482;
}
