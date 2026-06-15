// fichero 25034 -- macros y constantes -- MODIFICADO
#define LIMITE_25034 25234
#define FACTOR_25034 6

int aplicar_limite25034(int valor) {
    if (valor > LIMITE_25034) return LIMITE_25034;
    return valor * FACTOR_25034;
}
