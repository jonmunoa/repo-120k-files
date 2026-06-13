// fichero 15502 -- macros y constantes
#define LIMITE_15502 15602
#define FACTOR_15502 3

int aplicar_limite15502(int valor) {
    if (valor > LIMITE_15502) return LIMITE_15502;
    return valor * FACTOR_15502;
}
