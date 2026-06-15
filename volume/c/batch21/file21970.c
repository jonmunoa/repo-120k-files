// fichero 21970 -- macros y constantes -- MODIFICADO
#define LIMITE_21970 22170
#define FACTOR_21970 2

int aplicar_limite21970(int valor) {
    if (valor > LIMITE_21970) return LIMITE_21970;
    return valor * FACTOR_21970;
}
