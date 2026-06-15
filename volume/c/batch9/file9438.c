// fichero 9438 -- macros y constantes -- MODIFICADO
#define LIMITE_9438 9638
#define FACTOR_9438 5

int aplicar_limite9438(int valor) {
    if (valor > LIMITE_9438) return LIMITE_9438;
    return valor * FACTOR_9438;
}
