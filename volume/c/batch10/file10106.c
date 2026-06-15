// fichero 10106 -- macros y constantes -- MODIFICADO
#define LIMITE_10106 10306
#define FACTOR_10106 3

int aplicar_limite10106(int valor) {
    if (valor > LIMITE_10106) return LIMITE_10106;
    return valor * FACTOR_10106;
}
