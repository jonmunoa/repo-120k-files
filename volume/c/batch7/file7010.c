// fichero 7010 -- macros y constantes
#define LIMITE_7010 7110
#define FACTOR_7010 1

int aplicar_limite7010(int valor) {
    if (valor > LIMITE_7010) return LIMITE_7010;
    return valor * FACTOR_7010;
}
