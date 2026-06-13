// fichero 37238 -- macros y constantes
#define LIMITE_37238 37338
#define FACTOR_37238 4

int aplicar_limite37238(int valor) {
    if (valor > LIMITE_37238) return LIMITE_37238;
    return valor * FACTOR_37238;
}
