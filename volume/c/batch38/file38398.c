// fichero 38398 -- macros y constantes -- MODIFICADO
#define LIMITE_38398 38598
#define FACTOR_38398 5

int aplicar_limite38398(int valor) {
    if (valor > LIMITE_38398) return LIMITE_38398;
    return valor * FACTOR_38398;
}
