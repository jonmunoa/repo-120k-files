// fichero 42482 -- macros y constantes -- MODIFICADO
#define LIMITE_42482 42682
#define FACTOR_42482 4

int aplicar_limite42482(int valor) {
    if (valor > LIMITE_42482) return LIMITE_42482;
    return valor * FACTOR_42482;
}
