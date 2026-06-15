// fichero 10526 -- macros y constantes -- MODIFICADO
#define LIMITE_10526 10726
#define FACTOR_10526 3

int aplicar_limite10526(int valor) {
    if (valor > LIMITE_10526) return LIMITE_10526;
    return valor * FACTOR_10526;
}
