// fichero 10562 -- macros y constantes -- MODIFICADO
#define LIMITE_10562 10762
#define FACTOR_10562 4

int aplicar_limite10562(int valor) {
    if (valor > LIMITE_10562) return LIMITE_10562;
    return valor * FACTOR_10562;
}
