// fichero 4950 -- macros y constantes -- MODIFICADO
#define LIMITE_4950 5150
#define FACTOR_4950 2

int aplicar_limite4950(int valor) {
    if (valor > LIMITE_4950) return LIMITE_4950;
    return valor * FACTOR_4950;
}
