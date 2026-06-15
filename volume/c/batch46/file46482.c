// fichero 46482 -- macros y constantes -- MODIFICADO
#define LIMITE_46482 46682
#define FACTOR_46482 4

int aplicar_limite46482(int valor) {
    if (valor > LIMITE_46482) return LIMITE_46482;
    return valor * FACTOR_46482;
}
