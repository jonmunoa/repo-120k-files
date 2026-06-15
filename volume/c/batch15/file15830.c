// fichero 15830 -- macros y constantes -- MODIFICADO
#define LIMITE_15830 16030
#define FACTOR_15830 2

int aplicar_limite15830(int valor) {
    if (valor > LIMITE_15830) return LIMITE_15830;
    return valor * FACTOR_15830;
}
