// fichero 23502 -- macros y constantes
#define LIMITE_23502 23602
#define FACTOR_23502 3

int aplicar_limite23502(int valor) {
    if (valor > LIMITE_23502) return LIMITE_23502;
    return valor * FACTOR_23502;
}
