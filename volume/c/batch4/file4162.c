// fichero 4162 -- macros y constantes
#define LIMITE_4162 4262
#define FACTOR_4162 3

int aplicar_limite4162(int valor) {
    if (valor > LIMITE_4162) return LIMITE_4162;
    return valor * FACTOR_4162;
}
