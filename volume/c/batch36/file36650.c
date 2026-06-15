// fichero 36650 -- macros y constantes -- MODIFICADO
#define LIMITE_36650 36850
#define FACTOR_36650 2

int aplicar_limite36650(int valor) {
    if (valor > LIMITE_36650) return LIMITE_36650;
    return valor * FACTOR_36650;
}
