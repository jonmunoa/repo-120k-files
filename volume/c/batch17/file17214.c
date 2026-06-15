// fichero 17214 -- macros y constantes -- MODIFICADO
#define LIMITE_17214 17414
#define FACTOR_17214 6

int aplicar_limite17214(int valor) {
    if (valor > LIMITE_17214) return LIMITE_17214;
    return valor * FACTOR_17214;
}
