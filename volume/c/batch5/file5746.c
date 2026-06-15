// fichero 5746 -- macros y constantes -- MODIFICADO
#define LIMITE_5746 5946
#define FACTOR_5746 3

int aplicar_limite5746(int valor) {
    if (valor > LIMITE_5746) return LIMITE_5746;
    return valor * FACTOR_5746;
}
