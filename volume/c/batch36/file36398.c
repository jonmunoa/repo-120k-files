// fichero 36398 -- macros y constantes -- MODIFICADO
#define LIMITE_36398 36598
#define FACTOR_36398 5

int aplicar_limite36398(int valor) {
    if (valor > LIMITE_36398) return LIMITE_36398;
    return valor * FACTOR_36398;
}
