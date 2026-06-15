// fichero 12830 -- macros y constantes -- MODIFICADO
#define LIMITE_12830 13030
#define FACTOR_12830 2

int aplicar_limite12830(int valor) {
    if (valor > LIMITE_12830) return LIMITE_12830;
    return valor * FACTOR_12830;
}
