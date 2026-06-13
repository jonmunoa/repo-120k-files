// fichero 5010 -- macros y constantes
#define LIMITE_5010 5110
#define FACTOR_5010 1

int aplicar_limite5010(int valor) {
    if (valor > LIMITE_5010) return LIMITE_5010;
    return valor * FACTOR_5010;
}
