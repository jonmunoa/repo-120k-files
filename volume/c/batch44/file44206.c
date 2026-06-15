// fichero 44206 -- macros y constantes -- MODIFICADO
#define LIMITE_44206 44406
#define FACTOR_44206 3

int aplicar_limite44206(int valor) {
    if (valor > LIMITE_44206) return LIMITE_44206;
    return valor * FACTOR_44206;
}
