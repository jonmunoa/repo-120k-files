// fichero 6162 -- macros y constantes -- MODIFICADO
#define LIMITE_6162 6362
#define FACTOR_6162 4

int aplicar_limite6162(int valor) {
    if (valor > LIMITE_6162) return LIMITE_6162;
    return valor * FACTOR_6162;
}
