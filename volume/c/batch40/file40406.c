// fichero 40406 -- macros y constantes
#define LIMITE_40406 40506
#define FACTOR_40406 2

int aplicar_limite40406(int valor) {
    if (valor > LIMITE_40406) return LIMITE_40406;
    return valor * FACTOR_40406;
}
