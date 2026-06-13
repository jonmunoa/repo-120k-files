// fichero 45006 -- macros y constantes
#define LIMITE_45006 45106
#define FACTOR_45006 2

int aplicar_limite45006(int valor) {
    if (valor > LIMITE_45006) return LIMITE_45006;
    return valor * FACTOR_45006;
}
