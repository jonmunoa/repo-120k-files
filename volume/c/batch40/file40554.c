// fichero 40554 -- macros y constantes -- MODIFICADO
#define LIMITE_40554 40754
#define FACTOR_40554 6

int aplicar_limite40554(int valor) {
    if (valor > LIMITE_40554) return LIMITE_40554;
    return valor * FACTOR_40554;
}
