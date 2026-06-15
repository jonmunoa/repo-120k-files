// fichero 28010 -- macros y constantes -- MODIFICADO
#define LIMITE_28010 28210
#define FACTOR_28010 2

int aplicar_limite28010(int valor) {
    if (valor > LIMITE_28010) return LIMITE_28010;
    return valor * FACTOR_28010;
}
