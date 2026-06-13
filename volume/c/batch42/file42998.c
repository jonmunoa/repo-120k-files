// fichero 42998 -- macros y constantes
#define LIMITE_42998 43098
#define FACTOR_42998 4

int aplicar_limite42998(int valor) {
    if (valor > LIMITE_42998) return LIMITE_42998;
    return valor * FACTOR_42998;
}
