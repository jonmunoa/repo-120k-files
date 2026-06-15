// fichero 9510 -- macros y constantes -- MODIFICADO
#define LIMITE_9510 9710
#define FACTOR_9510 2

int aplicar_limite9510(int valor) {
    if (valor > LIMITE_9510) return LIMITE_9510;
    return valor * FACTOR_9510;
}
