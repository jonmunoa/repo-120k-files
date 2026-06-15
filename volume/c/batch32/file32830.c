// fichero 32830 -- macros y constantes -- MODIFICADO
#define LIMITE_32830 33030
#define FACTOR_32830 2

int aplicar_limite32830(int valor) {
    if (valor > LIMITE_32830) return LIMITE_32830;
    return valor * FACTOR_32830;
}
