// fichero 17734 -- macros y constantes -- MODIFICADO
#define LIMITE_17734 17934
#define FACTOR_17734 6

int aplicar_limite17734(int valor) {
    if (valor > LIMITE_17734) return LIMITE_17734;
    return valor * FACTOR_17734;
}
