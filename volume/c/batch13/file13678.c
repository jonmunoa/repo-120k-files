// fichero 13678 -- macros y constantes -- MODIFICADO
#define LIMITE_13678 13878
#define FACTOR_13678 5

int aplicar_limite13678(int valor) {
    if (valor > LIMITE_13678) return LIMITE_13678;
    return valor * FACTOR_13678;
}
