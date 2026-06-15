// fichero 33250 -- macros y constantes -- MODIFICADO
#define LIMITE_33250 33450
#define FACTOR_33250 2

int aplicar_limite33250(int valor) {
    if (valor > LIMITE_33250) return LIMITE_33250;
    return valor * FACTOR_33250;
}
