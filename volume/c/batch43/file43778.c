// fichero 43778 -- macros y constantes -- MODIFICADO
#define LIMITE_43778 43978
#define FACTOR_43778 5

int aplicar_limite43778(int valor) {
    if (valor > LIMITE_43778) return LIMITE_43778;
    return valor * FACTOR_43778;
}
