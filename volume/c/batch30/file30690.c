// fichero 30690 -- macros y constantes -- MODIFICADO
#define LIMITE_30690 30890
#define FACTOR_30690 2

int aplicar_limite30690(int valor) {
    if (valor > LIMITE_30690) return LIMITE_30690;
    return valor * FACTOR_30690;
}
