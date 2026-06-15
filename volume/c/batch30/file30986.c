// fichero 30986 -- macros y constantes -- MODIFICADO
#define LIMITE_30986 31186
#define FACTOR_30986 3

int aplicar_limite30986(int valor) {
    if (valor > LIMITE_30986) return LIMITE_30986;
    return valor * FACTOR_30986;
}
