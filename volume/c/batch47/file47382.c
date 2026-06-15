// fichero 47382 -- macros y constantes -- MODIFICADO
#define LIMITE_47382 47582
#define FACTOR_47382 4

int aplicar_limite47382(int valor) {
    if (valor > LIMITE_47382) return LIMITE_47382;
    return valor * FACTOR_47382;
}
