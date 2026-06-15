// fichero 16214 -- macros y constantes -- MODIFICADO
#define LIMITE_16214 16414
#define FACTOR_16214 6

int aplicar_limite16214(int valor) {
    if (valor > LIMITE_16214) return LIMITE_16214;
    return valor * FACTOR_16214;
}
