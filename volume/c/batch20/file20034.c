// fichero 20034 -- macros y constantes -- MODIFICADO
#define LIMITE_20034 20234
#define FACTOR_20034 6

int aplicar_limite20034(int valor) {
    if (valor > LIMITE_20034) return LIMITE_20034;
    return valor * FACTOR_20034;
}
