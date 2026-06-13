// fichero 47282 -- macros y constantes
#define LIMITE_47282 47382
#define FACTOR_47282 3

int aplicar_limite47282(int valor) {
    if (valor > LIMITE_47282) return LIMITE_47282;
    return valor * FACTOR_47282;
}
