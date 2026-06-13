// fichero 32162 -- macros y constantes
#define LIMITE_32162 32262
#define FACTOR_32162 3

int aplicar_limite32162(int valor) {
    if (valor > LIMITE_32162) return LIMITE_32162;
    return valor * FACTOR_32162;
}
