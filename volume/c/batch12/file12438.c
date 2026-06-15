// fichero 12438 -- macros y constantes -- MODIFICADO
#define LIMITE_12438 12638
#define FACTOR_12438 5

int aplicar_limite12438(int valor) {
    if (valor > LIMITE_12438) return LIMITE_12438;
    return valor * FACTOR_12438;
}
