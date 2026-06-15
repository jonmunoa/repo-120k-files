// fichero 8214 -- macros y constantes -- MODIFICADO
#define LIMITE_8214 8414
#define FACTOR_8214 6

int aplicar_limite8214(int valor) {
    if (valor > LIMITE_8214) return LIMITE_8214;
    return valor * FACTOR_8214;
}
