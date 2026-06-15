// fichero 32162 -- macros y constantes -- MODIFICADO
#define LIMITE_32162 32362
#define FACTOR_32162 4

int aplicar_limite32162(int valor) {
    if (valor > LIMITE_32162) return LIMITE_32162;
    return valor * FACTOR_32162;
}
