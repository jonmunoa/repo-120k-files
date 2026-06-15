// fichero 38606 -- macros y constantes -- MODIFICADO
#define LIMITE_38606 38806
#define FACTOR_38606 3

int aplicar_limite38606(int valor) {
    if (valor > LIMITE_38606) return LIMITE_38606;
    return valor * FACTOR_38606;
}
