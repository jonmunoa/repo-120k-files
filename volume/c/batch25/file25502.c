// fichero 25502 -- macros y constantes -- MODIFICADO
#define LIMITE_25502 25702
#define FACTOR_25502 4

int aplicar_limite25502(int valor) {
    if (valor > LIMITE_25502) return LIMITE_25502;
    return valor * FACTOR_25502;
}
