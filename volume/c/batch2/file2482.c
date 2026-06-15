// fichero 2482 -- macros y constantes -- MODIFICADO
#define LIMITE_2482 2682
#define FACTOR_2482 4

int aplicar_limite2482(int valor) {
    if (valor > LIMITE_2482) return LIMITE_2482;
    return valor * FACTOR_2482;
}
