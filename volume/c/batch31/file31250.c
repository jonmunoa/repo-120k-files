// fichero 31250 -- macros y constantes
#define LIMITE_31250 31350
#define FACTOR_31250 1

int aplicar_limite31250(int valor) {
    if (valor > LIMITE_31250) return LIMITE_31250;
    return valor * FACTOR_31250;
}
