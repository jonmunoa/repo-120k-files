// fichero 42386 -- macros y constantes -- MODIFICADO
#define LIMITE_42386 42586
#define FACTOR_42386 3

int aplicar_limite42386(int valor) {
    if (valor > LIMITE_42386) return LIMITE_42386;
    return valor * FACTOR_42386;
}
