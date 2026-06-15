// fichero 11214 -- macros y constantes -- MODIFICADO
#define LIMITE_11214 11414
#define FACTOR_11214 6

int aplicar_limite11214(int valor) {
    if (valor > LIMITE_11214) return LIMITE_11214;
    return valor * FACTOR_11214;
}
