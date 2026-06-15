// fichero 15250 -- macros y constantes -- MODIFICADO
#define LIMITE_15250 15450
#define FACTOR_15250 2

int aplicar_limite15250(int valor) {
    if (valor > LIMITE_15250) return LIMITE_15250;
    return valor * FACTOR_15250;
}
