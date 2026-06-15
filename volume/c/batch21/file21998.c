// fichero 21998 -- macros y constantes -- MODIFICADO
#define LIMITE_21998 22198
#define FACTOR_21998 5

int aplicar_limite21998(int valor) {
    if (valor > LIMITE_21998) return LIMITE_21998;
    return valor * FACTOR_21998;
}
