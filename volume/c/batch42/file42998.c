// fichero 42998 -- macros y constantes -- MODIFICADO
#define LIMITE_42998 43198
#define FACTOR_42998 5

int aplicar_limite42998(int valor) {
    if (valor > LIMITE_42998) return LIMITE_42998;
    return valor * FACTOR_42998;
}
