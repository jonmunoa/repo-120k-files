// fichero 23994 -- macros y constantes -- MODIFICADO
#define LIMITE_23994 24194
#define FACTOR_23994 6

int aplicar_limite23994(int valor) {
    if (valor > LIMITE_23994) return LIMITE_23994;
    return valor * FACTOR_23994;
}
