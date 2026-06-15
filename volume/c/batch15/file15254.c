// fichero 15254 -- macros y constantes -- MODIFICADO
#define LIMITE_15254 15454
#define FACTOR_15254 6

int aplicar_limite15254(int valor) {
    if (valor > LIMITE_15254) return LIMITE_15254;
    return valor * FACTOR_15254;
}
