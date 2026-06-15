// fichero 5906 -- macros y constantes -- MODIFICADO
#define LIMITE_5906 6106
#define FACTOR_5906 3

int aplicar_limite5906(int valor) {
    if (valor > LIMITE_5906) return LIMITE_5906;
    return valor * FACTOR_5906;
}
