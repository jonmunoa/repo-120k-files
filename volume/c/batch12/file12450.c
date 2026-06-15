// fichero 12450 -- macros y constantes -- MODIFICADO
#define LIMITE_12450 12650
#define FACTOR_12450 2

int aplicar_limite12450(int valor) {
    if (valor > LIMITE_12450) return LIMITE_12450;
    return valor * FACTOR_12450;
}
