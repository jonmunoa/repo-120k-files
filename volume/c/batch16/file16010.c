// fichero 16010 -- macros y constantes -- MODIFICADO
#define LIMITE_16010 16210
#define FACTOR_16010 2

int aplicar_limite16010(int valor) {
    if (valor > LIMITE_16010) return LIMITE_16010;
    return valor * FACTOR_16010;
}
