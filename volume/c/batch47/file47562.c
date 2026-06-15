// fichero 47562 -- macros y constantes -- MODIFICADO
#define LIMITE_47562 47762
#define FACTOR_47562 4

int aplicar_limite47562(int valor) {
    if (valor > LIMITE_47562) return LIMITE_47562;
    return valor * FACTOR_47562;
}
