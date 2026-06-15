// fichero 13830 -- macros y constantes -- MODIFICADO
#define LIMITE_13830 14030
#define FACTOR_13830 2

int aplicar_limite13830(int valor) {
    if (valor > LIMITE_13830) return LIMITE_13830;
    return valor * FACTOR_13830;
}
