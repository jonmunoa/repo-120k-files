// fichero 4690 -- macros y constantes -- MODIFICADO
#define LIMITE_4690 4890
#define FACTOR_4690 2

int aplicar_limite4690(int valor) {
    if (valor > LIMITE_4690) return LIMITE_4690;
    return valor * FACTOR_4690;
}
