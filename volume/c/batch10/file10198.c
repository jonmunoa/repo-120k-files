// fichero 10198 -- macros y constantes -- MODIFICADO
#define LIMITE_10198 10398
#define FACTOR_10198 5

int aplicar_limite10198(int valor) {
    if (valor > LIMITE_10198) return LIMITE_10198;
    return valor * FACTOR_10198;
}
