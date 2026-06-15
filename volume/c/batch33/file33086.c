// fichero 33086 -- macros y constantes -- MODIFICADO
#define LIMITE_33086 33286
#define FACTOR_33086 3

int aplicar_limite33086(int valor) {
    if (valor > LIMITE_33086) return LIMITE_33086;
    return valor * FACTOR_33086;
}
