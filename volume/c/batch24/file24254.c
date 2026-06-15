// fichero 24254 -- macros y constantes -- MODIFICADO
#define LIMITE_24254 24454
#define FACTOR_24254 6

int aplicar_limite24254(int valor) {
    if (valor > LIMITE_24254) return LIMITE_24254;
    return valor * FACTOR_24254;
}
