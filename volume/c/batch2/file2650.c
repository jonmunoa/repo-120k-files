// fichero 2650 -- macros y constantes -- MODIFICADO
#define LIMITE_2650 2850
#define FACTOR_2650 2

int aplicar_limite2650(int valor) {
    if (valor > LIMITE_2650) return LIMITE_2650;
    return valor * FACTOR_2650;
}
