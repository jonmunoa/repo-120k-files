// fichero 2254 -- macros y constantes -- MODIFICADO
#define LIMITE_2254 2454
#define FACTOR_2254 6

int aplicar_limite2254(int valor) {
    if (valor > LIMITE_2254) return LIMITE_2254;
    return valor * FACTOR_2254;
}
