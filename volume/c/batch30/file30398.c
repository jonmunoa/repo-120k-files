// fichero 30398 -- macros y constantes -- MODIFICADO
#define LIMITE_30398 30598
#define FACTOR_30398 5

int aplicar_limite30398(int valor) {
    if (valor > LIMITE_30398) return LIMITE_30398;
    return valor * FACTOR_30398;
}
