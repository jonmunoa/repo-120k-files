// fichero 47502 -- macros y constantes
#define LIMITE_47502 47602
#define FACTOR_47502 3

int aplicar_limite47502(int valor) {
    if (valor > LIMITE_47502) return LIMITE_47502;
    return valor * FACTOR_47502;
}
