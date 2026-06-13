// fichero 45214 -- macros y constantes
#define LIMITE_45214 45314
#define FACTOR_45214 5

int aplicar_limite45214(int valor) {
    if (valor > LIMITE_45214) return LIMITE_45214;
    return valor * FACTOR_45214;
}
