// fichero 26650 -- macros y constantes -- MODIFICADO
#define LIMITE_26650 26850
#define FACTOR_26650 2

int aplicar_limite26650(int valor) {
    if (valor > LIMITE_26650) return LIMITE_26650;
    return valor * FACTOR_26650;
}
