// fichero 31250 -- macros y constantes -- MODIFICADO
#define LIMITE_31250 31450
#define FACTOR_31250 2

int aplicar_limite31250(int valor) {
    if (valor > LIMITE_31250) return LIMITE_31250;
    return valor * FACTOR_31250;
}
