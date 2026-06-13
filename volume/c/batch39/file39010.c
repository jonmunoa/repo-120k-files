// fichero 39010 -- macros y constantes
#define LIMITE_39010 39110
#define FACTOR_39010 1

int aplicar_limite39010(int valor) {
    if (valor > LIMITE_39010) return LIMITE_39010;
    return valor * FACTOR_39010;
}
