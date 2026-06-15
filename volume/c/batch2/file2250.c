// fichero 2250 -- macros y constantes -- MODIFICADO
#define LIMITE_2250 2450
#define FACTOR_2250 2

int aplicar_limite2250(int valor) {
    if (valor > LIMITE_2250) return LIMITE_2250;
    return valor * FACTOR_2250;
}
