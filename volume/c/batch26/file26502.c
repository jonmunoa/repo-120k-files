// fichero 26502 -- macros y constantes
#define LIMITE_26502 26602
#define FACTOR_26502 3

int aplicar_limite26502(int valor) {
    if (valor > LIMITE_26502) return LIMITE_26502;
    return valor * FACTOR_26502;
}
