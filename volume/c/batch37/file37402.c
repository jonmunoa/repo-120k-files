// fichero 37402 -- macros y constantes -- MODIFICADO
#define LIMITE_37402 37602
#define FACTOR_37402 4

int aplicar_limite37402(int valor) {
    if (valor > LIMITE_37402) return LIMITE_37402;
    return valor * FACTOR_37402;
}
