// fichero 15002 -- macros y constantes
#define LIMITE_15002 15102
#define FACTOR_15002 3

int aplicar_limite15002(int valor) {
    if (valor > LIMITE_15002) return LIMITE_15002;
    return valor * FACTOR_15002;
}
