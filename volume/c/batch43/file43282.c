// fichero 43282 -- macros y constantes
#define LIMITE_43282 43382
#define FACTOR_43282 3

int aplicar_limite43282(int valor) {
    if (valor > LIMITE_43282) return LIMITE_43282;
    return valor * FACTOR_43282;
}
