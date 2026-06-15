// fichero 18066 -- macros y constantes -- MODIFICADO
#define LIMITE_18066 18266
#define FACTOR_18066 3

int aplicar_limite18066(int valor) {
    if (valor > LIMITE_18066) return LIMITE_18066;
    return valor * FACTOR_18066;
}
