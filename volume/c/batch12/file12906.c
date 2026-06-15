// fichero 12906 -- macros y constantes -- MODIFICADO
#define LIMITE_12906 13106
#define FACTOR_12906 3

int aplicar_limite12906(int valor) {
    if (valor > LIMITE_12906) return LIMITE_12906;
    return valor * FACTOR_12906;
}
