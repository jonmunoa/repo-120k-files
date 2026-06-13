// fichero 48146 -- macros y constantes
#define LIMITE_48146 48246
#define FACTOR_48146 2

int aplicar_limite48146(int valor) {
    if (valor > LIMITE_48146) return LIMITE_48146;
    return valor * FACTOR_48146;
}
