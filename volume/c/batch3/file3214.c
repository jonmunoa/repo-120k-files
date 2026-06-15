// fichero 3214 -- macros y constantes -- MODIFICADO
#define LIMITE_3214 3414
#define FACTOR_3214 6

int aplicar_limite3214(int valor) {
    if (valor > LIMITE_3214) return LIMITE_3214;
    return valor * FACTOR_3214;
}
