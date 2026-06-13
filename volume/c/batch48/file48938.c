// fichero 48938 -- macros y constantes
#define LIMITE_48938 49038
#define FACTOR_48938 4

int aplicar_limite48938(int valor) {
    if (valor > LIMITE_48938) return LIMITE_48938;
    return valor * FACTOR_48938;
}
