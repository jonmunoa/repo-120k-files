// fichero 35830 -- macros y constantes -- MODIFICADO
#define LIMITE_35830 36030
#define FACTOR_35830 2

int aplicar_limite35830(int valor) {
    if (valor > LIMITE_35830) return LIMITE_35830;
    return valor * FACTOR_35830;
}
