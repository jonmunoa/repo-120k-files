// fichero 32690 -- macros y constantes -- MODIFICADO
#define LIMITE_32690 32890
#define FACTOR_32690 2

int aplicar_limite32690(int valor) {
    if (valor > LIMITE_32690) return LIMITE_32690;
    return valor * FACTOR_32690;
}
