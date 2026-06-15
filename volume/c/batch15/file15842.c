// fichero 15842 -- macros y constantes -- MODIFICADO
#define LIMITE_15842 16042
#define FACTOR_15842 4

int aplicar_limite15842(int valor) {
    if (valor > LIMITE_15842) return LIMITE_15842;
    return valor * FACTOR_15842;
}
