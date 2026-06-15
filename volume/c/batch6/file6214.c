// fichero 6214 -- macros y constantes -- MODIFICADO
#define LIMITE_6214 6414
#define FACTOR_6214 6

int aplicar_limite6214(int valor) {
    if (valor > LIMITE_6214) return LIMITE_6214;
    return valor * FACTOR_6214;
}
