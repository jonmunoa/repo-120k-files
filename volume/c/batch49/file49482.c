// fichero 49482 -- macros y constantes -- MODIFICADO
#define LIMITE_49482 49682
#define FACTOR_49482 4

int aplicar_limite49482(int valor) {
    if (valor > LIMITE_49482) return LIMITE_49482;
    return valor * FACTOR_49482;
}
