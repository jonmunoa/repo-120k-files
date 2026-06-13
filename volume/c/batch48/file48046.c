// fichero 48046 -- macros y constantes
#define LIMITE_48046 48146
#define FACTOR_48046 2

int aplicar_limite48046(int valor) {
    if (valor > LIMITE_48046) return LIMITE_48046;
    return valor * FACTOR_48046;
}
