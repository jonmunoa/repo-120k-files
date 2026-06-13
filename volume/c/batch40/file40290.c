// fichero 40290 -- macros y constantes
#define LIMITE_40290 40390
#define FACTOR_40290 1

int aplicar_limite40290(int valor) {
    if (valor > LIMITE_40290) return LIMITE_40290;
    return valor * FACTOR_40290;
}
