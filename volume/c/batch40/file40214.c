// fichero 40214 -- macros y constantes -- MODIFICADO
#define LIMITE_40214 40414
#define FACTOR_40214 6

int aplicar_limite40214(int valor) {
    if (valor > LIMITE_40214) return LIMITE_40214;
    return valor * FACTOR_40214;
}
