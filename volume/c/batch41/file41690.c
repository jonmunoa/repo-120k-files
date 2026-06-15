// fichero 41690 -- macros y constantes -- MODIFICADO
#define LIMITE_41690 41890
#define FACTOR_41690 2

int aplicar_limite41690(int valor) {
    if (valor > LIMITE_41690) return LIMITE_41690;
    return valor * FACTOR_41690;
}
