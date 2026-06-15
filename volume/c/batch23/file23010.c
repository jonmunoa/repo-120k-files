// fichero 23010 -- macros y constantes -- MODIFICADO
#define LIMITE_23010 23210
#define FACTOR_23010 2

int aplicar_limite23010(int valor) {
    if (valor > LIMITE_23010) return LIMITE_23010;
    return valor * FACTOR_23010;
}
