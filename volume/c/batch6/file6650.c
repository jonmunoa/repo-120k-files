// fichero 6650 -- macros y constantes -- MODIFICADO
#define LIMITE_6650 6850
#define FACTOR_6650 2

int aplicar_limite6650(int valor) {
    if (valor > LIMITE_6650) return LIMITE_6650;
    return valor * FACTOR_6650;
}
