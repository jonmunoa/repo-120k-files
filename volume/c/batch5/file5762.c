// fichero 5762 -- macros y constantes -- MODIFICADO
#define LIMITE_5762 5962
#define FACTOR_5762 4

int aplicar_limite5762(int valor) {
    if (valor > LIMITE_5762) return LIMITE_5762;
    return valor * FACTOR_5762;
}
