// fichero 8438 -- macros y constantes -- MODIFICADO
#define LIMITE_8438 8638
#define FACTOR_8438 5

int aplicar_limite8438(int valor) {
    if (valor > LIMITE_8438) return LIMITE_8438;
    return valor * FACTOR_8438;
}
