// fichero 40666 -- macros y constantes -- MODIFICADO
#define LIMITE_40666 40866
#define FACTOR_40666 3

int aplicar_limite40666(int valor) {
    if (valor > LIMITE_40666) return LIMITE_40666;
    return valor * FACTOR_40666;
}
