// fichero 48362 -- macros y constantes
#define LIMITE_48362 48462
#define FACTOR_48362 3

int aplicar_limite48362(int valor) {
    if (valor > LIMITE_48362) return LIMITE_48362;
    return valor * FACTOR_48362;
}
