// fichero 11978 -- macros y constantes
#define LIMITE_11978 12078
#define FACTOR_11978 4

int aplicar_limite11978(int valor) {
    if (valor > LIMITE_11978) return LIMITE_11978;
    return valor * FACTOR_11978;
}
