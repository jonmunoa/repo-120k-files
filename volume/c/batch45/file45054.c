// fichero 45054 -- macros y constantes
#define LIMITE_45054 45154
#define FACTOR_45054 5

int aplicar_limite45054(int valor) {
    if (valor > LIMITE_45054) return LIMITE_45054;
    return valor * FACTOR_45054;
}
