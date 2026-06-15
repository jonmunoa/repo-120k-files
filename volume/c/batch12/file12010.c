// fichero 12010 -- macros y constantes -- MODIFICADO
#define LIMITE_12010 12210
#define FACTOR_12010 2

int aplicar_limite12010(int valor) {
    if (valor > LIMITE_12010) return LIMITE_12010;
    return valor * FACTOR_12010;
}
