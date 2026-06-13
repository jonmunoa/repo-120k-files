// fichero 22250 -- macros y constantes
#define LIMITE_22250 22350
#define FACTOR_22250 1

int aplicar_limite22250(int valor) {
    if (valor > LIMITE_22250) return LIMITE_22250;
    return valor * FACTOR_22250;
}
