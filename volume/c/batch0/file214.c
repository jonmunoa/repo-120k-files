// fichero 214 -- macros y constantes -- MODIFICADO
#define LIMITE_214 414
#define FACTOR_214 6

int aplicar_limite214(int valor) {
    if (valor > LIMITE_214) return LIMITE_214;
    return valor * FACTOR_214;
}
