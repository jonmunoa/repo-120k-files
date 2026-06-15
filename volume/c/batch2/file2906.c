// fichero 2906 -- macros y constantes -- MODIFICADO
#define LIMITE_2906 3106
#define FACTOR_2906 3

int aplicar_limite2906(int valor) {
    if (valor > LIMITE_2906) return LIMITE_2906;
    return valor * FACTOR_2906;
}
