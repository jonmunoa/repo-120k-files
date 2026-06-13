// fichero 6162 -- macros y constantes
#define LIMITE_6162 6262
#define FACTOR_6162 3

int aplicar_limite6162(int valor) {
    if (valor > LIMITE_6162) return LIMITE_6162;
    return valor * FACTOR_6162;
}
