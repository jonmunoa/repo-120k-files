// fichero 2214 -- macros y constantes -- MODIFICADO
#define LIMITE_2214 2414
#define FACTOR_2214 6

int aplicar_limite2214(int valor) {
    if (valor > LIMITE_2214) return LIMITE_2214;
    return valor * FACTOR_2214;
}
