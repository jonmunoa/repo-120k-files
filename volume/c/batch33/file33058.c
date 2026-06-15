// fichero 33058 -- macros y constantes -- MODIFICADO
#define LIMITE_33058 33258
#define FACTOR_33058 5

int aplicar_limite33058(int valor) {
    if (valor > LIMITE_33058) return LIMITE_33058;
    return valor * FACTOR_33058;
}
