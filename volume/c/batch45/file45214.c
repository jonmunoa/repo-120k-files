// fichero 45214 -- macros y constantes -- MODIFICADO
#define LIMITE_45214 45414
#define FACTOR_45214 6

int aplicar_limite45214(int valor) {
    if (valor > LIMITE_45214) return LIMITE_45214;
    return valor * FACTOR_45214;
}
