// fichero 52162 -- macros y constantes
#define LIMITE_52162 52262
#define FACTOR_52162 3

int aplicar_limite52162(int valor) {
    if (valor > LIMITE_52162) return LIMITE_52162;
    return valor * FACTOR_52162;
}
