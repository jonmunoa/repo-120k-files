// fichero 14502 -- macros y constantes
#define LIMITE_14502 14602
#define FACTOR_14502 3

int aplicar_limite14502(int valor) {
    if (valor > LIMITE_14502) return LIMITE_14502;
    return valor * FACTOR_14502;
}
