// fichero 19214 -- macros y constantes -- MODIFICADO
#define LIMITE_19214 19414
#define FACTOR_19214 6

int aplicar_limite19214(int valor) {
    if (valor > LIMITE_19214) return LIMITE_19214;
    return valor * FACTOR_19214;
}
