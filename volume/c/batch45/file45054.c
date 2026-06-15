// fichero 45054 -- macros y constantes -- MODIFICADO
#define LIMITE_45054 45254
#define FACTOR_45054 6

int aplicar_limite45054(int valor) {
    if (valor > LIMITE_45054) return LIMITE_45054;
    return valor * FACTOR_45054;
}
