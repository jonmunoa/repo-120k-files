// fichero 32502 -- macros y constantes
#define LIMITE_32502 32602
#define FACTOR_32502 3

int aplicar_limite32502(int valor) {
    if (valor > LIMITE_32502) return LIMITE_32502;
    return valor * FACTOR_32502;
}
