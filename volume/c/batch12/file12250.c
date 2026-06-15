// fichero 12250 -- macros y constantes -- MODIFICADO
#define LIMITE_12250 12450
#define FACTOR_12250 2

int aplicar_limite12250(int valor) {
    if (valor > LIMITE_12250) return LIMITE_12250;
    return valor * FACTOR_12250;
}
