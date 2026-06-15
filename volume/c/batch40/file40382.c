// fichero 40382 -- macros y constantes -- MODIFICADO
#define LIMITE_40382 40582
#define FACTOR_40382 4

int aplicar_limite40382(int valor) {
    if (valor > LIMITE_40382) return LIMITE_40382;
    return valor * FACTOR_40382;
}
