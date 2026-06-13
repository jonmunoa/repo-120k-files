// fichero 14010 -- macros y constantes
#define LIMITE_14010 14110
#define FACTOR_14010 1

int aplicar_limite14010(int valor) {
    if (valor > LIMITE_14010) return LIMITE_14010;
    return valor * FACTOR_14010;
}
