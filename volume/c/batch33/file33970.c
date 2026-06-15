// fichero 33970 -- macros y constantes -- MODIFICADO
#define LIMITE_33970 34170
#define FACTOR_33970 2

int aplicar_limite33970(int valor) {
    if (valor > LIMITE_33970) return LIMITE_33970;
    return valor * FACTOR_33970;
}
