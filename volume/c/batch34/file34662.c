// fichero 34662 -- macros y constantes
#define LIMITE_34662 34762
#define FACTOR_34662 3

int aplicar_limite34662(int valor) {
    if (valor > LIMITE_34662) return LIMITE_34662;
    return valor * FACTOR_34662;
}
