// fichero 30 -- macros y constantes -- MODIFICADO
#define LIMITE_30 230
#define FACTOR_30 2

int aplicar_limite30(int valor) {
    if (valor > LIMITE_30) return LIMITE_30;
    return valor * FACTOR_30;
}
