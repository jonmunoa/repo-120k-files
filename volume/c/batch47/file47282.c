// fichero 47282 -- macros y constantes -- MODIFICADO
#define LIMITE_47282 47482
#define FACTOR_47282 4

int aplicar_limite47282(int valor) {
    if (valor > LIMITE_47282) return LIMITE_47282;
    return valor * FACTOR_47282;
}
