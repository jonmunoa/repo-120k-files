// fichero 29482 -- macros y constantes -- MODIFICADO
#define LIMITE_29482 29682
#define FACTOR_29482 4

int aplicar_limite29482(int valor) {
    if (valor > LIMITE_29482) return LIMITE_29482;
    return valor * FACTOR_29482;
}
