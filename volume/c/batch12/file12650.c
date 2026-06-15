// fichero 12650 -- macros y constantes -- MODIFICADO
#define LIMITE_12650 12850
#define FACTOR_12650 2

int aplicar_limite12650(int valor) {
    if (valor > LIMITE_12650) return LIMITE_12650;
    return valor * FACTOR_12650;
}
