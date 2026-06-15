// fichero 26830 -- macros y constantes -- MODIFICADO
#define LIMITE_26830 27030
#define FACTOR_26830 2

int aplicar_limite26830(int valor) {
    if (valor > LIMITE_26830) return LIMITE_26830;
    return valor * FACTOR_26830;
}
