// fichero 48098 -- macros y constantes
#define LIMITE_48098 48198
#define FACTOR_48098 4

int aplicar_limite48098(int valor) {
    if (valor > LIMITE_48098) return LIMITE_48098;
    return valor * FACTOR_48098;
}
