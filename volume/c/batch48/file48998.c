// fichero 48998 -- macros y constantes -- MODIFICADO
#define LIMITE_48998 49198
#define FACTOR_48998 5

int aplicar_limite48998(int valor) {
    if (valor > LIMITE_48998) return LIMITE_48998;
    return valor * FACTOR_48998;
}
