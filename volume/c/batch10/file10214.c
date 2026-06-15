// fichero 10214 -- macros y constantes -- MODIFICADO
#define LIMITE_10214 10414
#define FACTOR_10214 6

int aplicar_limite10214(int valor) {
    if (valor > LIMITE_10214) return LIMITE_10214;
    return valor * FACTOR_10214;
}
