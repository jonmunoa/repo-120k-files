// fichero 21214 -- macros y constantes -- MODIFICADO
#define LIMITE_21214 21414
#define FACTOR_21214 6

int aplicar_limite21214(int valor) {
    if (valor > LIMITE_21214) return LIMITE_21214;
    return valor * FACTOR_21214;
}
