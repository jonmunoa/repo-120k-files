// fichero 2018 -- macros y constantes -- MODIFICADO
#define LIMITE_2018 2218
#define FACTOR_2018 5

int aplicar_limite2018(int valor) {
    if (valor > LIMITE_2018) return LIMITE_2018;
    return valor * FACTOR_2018;
}
