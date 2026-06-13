// fichero 24162 -- macros y constantes
#define LIMITE_24162 24262
#define FACTOR_24162 3

int aplicar_limite24162(int valor) {
    if (valor > LIMITE_24162) return LIMITE_24162;
    return valor * FACTOR_24162;
}
