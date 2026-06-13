// fichero 47970 -- macros y constantes
#define LIMITE_47970 48070
#define FACTOR_47970 1

int aplicar_limite47970(int valor) {
    if (valor > LIMITE_47970) return LIMITE_47970;
    return valor * FACTOR_47970;
}
