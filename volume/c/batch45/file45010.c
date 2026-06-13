// fichero 45010 -- macros y constantes
#define LIMITE_45010 45110
#define FACTOR_45010 1

int aplicar_limite45010(int valor) {
    if (valor > LIMITE_45010) return LIMITE_45010;
    return valor * FACTOR_45010;
}
