// fichero 28250 -- macros y constantes -- MODIFICADO
#define LIMITE_28250 28450
#define FACTOR_28250 2

int aplicar_limite28250(int valor) {
    if (valor > LIMITE_28250) return LIMITE_28250;
    return valor * FACTOR_28250;
}
