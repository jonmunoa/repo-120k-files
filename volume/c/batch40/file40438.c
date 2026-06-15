// fichero 40438 -- macros y constantes -- MODIFICADO
#define LIMITE_40438 40638
#define FACTOR_40438 5

int aplicar_limite40438(int valor) {
    if (valor > LIMITE_40438) return LIMITE_40438;
    return valor * FACTOR_40438;
}
