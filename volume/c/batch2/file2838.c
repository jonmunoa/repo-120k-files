// fichero 2838 -- macros y constantes -- MODIFICADO
#define LIMITE_2838 3038
#define FACTOR_2838 5

int aplicar_limite2838(int valor) {
    if (valor > LIMITE_2838) return LIMITE_2838;
    return valor * FACTOR_2838;
}
