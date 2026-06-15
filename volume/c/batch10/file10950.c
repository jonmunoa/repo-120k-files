// fichero 10950 -- macros y constantes -- MODIFICADO
#define LIMITE_10950 11150
#define FACTOR_10950 2

int aplicar_limite10950(int valor) {
    if (valor > LIMITE_10950) return LIMITE_10950;
    return valor * FACTOR_10950;
}
