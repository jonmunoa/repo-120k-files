// fichero 22162 -- macros y constantes -- MODIFICADO
#define LIMITE_22162 22362
#define FACTOR_22162 4

int aplicar_limite22162(int valor) {
    if (valor > LIMITE_22162) return LIMITE_22162;
    return valor * FACTOR_22162;
}
