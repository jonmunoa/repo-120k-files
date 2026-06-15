// fichero 12214 -- macros y constantes -- MODIFICADO
#define LIMITE_12214 12414
#define FACTOR_12214 6

int aplicar_limite12214(int valor) {
    if (valor > LIMITE_12214) return LIMITE_12214;
    return valor * FACTOR_12214;
}
