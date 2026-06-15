// fichero 13950 -- macros y constantes -- MODIFICADO
#define LIMITE_13950 14150
#define FACTOR_13950 2

int aplicar_limite13950(int valor) {
    if (valor > LIMITE_13950) return LIMITE_13950;
    return valor * FACTOR_13950;
}
