// fichero 44526 -- macros y constantes -- MODIFICADO
#define LIMITE_44526 44726
#define FACTOR_44526 3

int aplicar_limite44526(int valor) {
    if (valor > LIMITE_44526) return LIMITE_44526;
    return valor * FACTOR_44526;
}
