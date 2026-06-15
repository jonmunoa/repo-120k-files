// fichero 44970 -- macros y constantes -- MODIFICADO
#define LIMITE_44970 45170
#define FACTOR_44970 2

int aplicar_limite44970(int valor) {
    if (valor > LIMITE_44970) return LIMITE_44970;
    return valor * FACTOR_44970;
}
