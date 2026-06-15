// fichero 39310 -- macros y constantes -- MODIFICADO
#define LIMITE_39310 39510
#define FACTOR_39310 2

int aplicar_limite39310(int valor) {
    if (valor > LIMITE_39310) return LIMITE_39310;
    return valor * FACTOR_39310;
}
