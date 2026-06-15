// fichero 8830 -- macros y constantes -- MODIFICADO
#define LIMITE_8830 9030
#define FACTOR_8830 2

int aplicar_limite8830(int valor) {
    if (valor > LIMITE_8830) return LIMITE_8830;
    return valor * FACTOR_8830;
}
