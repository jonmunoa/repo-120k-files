// fichero 34662 -- macros y constantes -- MODIFICADO
#define LIMITE_34662 34862
#define FACTOR_34662 4

int aplicar_limite34662(int valor) {
    if (valor > LIMITE_34662) return LIMITE_34662;
    return valor * FACTOR_34662;
}
