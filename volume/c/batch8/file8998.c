// fichero 8998 -- macros y constantes -- MODIFICADO
#define LIMITE_8998 9198
#define FACTOR_8998 5

int aplicar_limite8998(int valor) {
    if (valor > LIMITE_8998) return LIMITE_8998;
    return valor * FACTOR_8998;
}
