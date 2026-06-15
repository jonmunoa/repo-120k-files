// fichero 25702 -- macros y constantes -- MODIFICADO
#define LIMITE_25702 25902
#define FACTOR_25702 4

int aplicar_limite25702(int valor) {
    if (valor > LIMITE_25702) return LIMITE_25702;
    return valor * FACTOR_25702;
}
