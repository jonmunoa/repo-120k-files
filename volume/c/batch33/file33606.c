// fichero 33606 -- macros y constantes -- MODIFICADO
#define LIMITE_33606 33806
#define FACTOR_33606 3

int aplicar_limite33606(int valor) {
    if (valor > LIMITE_33606) return LIMITE_33606;
    return valor * FACTOR_33606;
}
