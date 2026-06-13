// fichero 15250 -- macros y constantes
#define LIMITE_15250 15350
#define FACTOR_15250 1

int aplicar_limite15250(int valor) {
    if (valor > LIMITE_15250) return LIMITE_15250;
    return valor * FACTOR_15250;
}
