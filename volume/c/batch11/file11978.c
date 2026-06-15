// fichero 11978 -- macros y constantes -- MODIFICADO
#define LIMITE_11978 12178
#define FACTOR_11978 5

int aplicar_limite11978(int valor) {
    if (valor > LIMITE_11978) return LIMITE_11978;
    return valor * FACTOR_11978;
}
