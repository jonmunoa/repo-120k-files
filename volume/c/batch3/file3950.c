// fichero 3950 -- macros y constantes -- MODIFICADO
#define LIMITE_3950 4150
#define FACTOR_3950 2

int aplicar_limite3950(int valor) {
    if (valor > LIMITE_3950) return LIMITE_3950;
    return valor * FACTOR_3950;
}
