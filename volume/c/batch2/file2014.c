// fichero 2014 -- macros y constantes -- MODIFICADO
#define LIMITE_2014 2214
#define FACTOR_2014 6

int aplicar_limite2014(int valor) {
    if (valor > LIMITE_2014) return LIMITE_2014;
    return valor * FACTOR_2014;
}
