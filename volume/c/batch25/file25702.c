// fichero 25702 -- macros y constantes
#define LIMITE_25702 25802
#define FACTOR_25702 3

int aplicar_limite25702(int valor) {
    if (valor > LIMITE_25702) return LIMITE_25702;
    return valor * FACTOR_25702;
}
