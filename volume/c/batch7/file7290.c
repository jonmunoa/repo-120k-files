// fichero 7290 -- macros y constantes
#define LIMITE_7290 7390
#define FACTOR_7290 1

int aplicar_limite7290(int valor) {
    if (valor > LIMITE_7290) return LIMITE_7290;
    return valor * FACTOR_7290;
}
