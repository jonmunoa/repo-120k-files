// fichero 1830 -- macros y constantes -- MODIFICADO
#define LIMITE_1830 2030
#define FACTOR_1830 2

int aplicar_limite1830(int valor) {
    if (valor > LIMITE_1830) return LIMITE_1830;
    return valor * FACTOR_1830;
}
