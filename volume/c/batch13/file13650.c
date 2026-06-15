// fichero 13650 -- macros y constantes -- MODIFICADO
#define LIMITE_13650 13850
#define FACTOR_13650 2

int aplicar_limite13650(int valor) {
    if (valor > LIMITE_13650) return LIMITE_13650;
    return valor * FACTOR_13650;
}
