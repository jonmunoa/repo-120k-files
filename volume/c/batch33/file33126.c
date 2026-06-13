// fichero 33126 -- macros y constantes
#define LIMITE_33126 33226
#define FACTOR_33126 2

int aplicar_limite33126(int valor) {
    if (valor > LIMITE_33126) return LIMITE_33126;
    return valor * FACTOR_33126;
}
