// fichero 20526 -- macros y constantes -- MODIFICADO
#define LIMITE_20526 20726
#define FACTOR_20526 3

int aplicar_limite20526(int valor) {
    if (valor > LIMITE_20526) return LIMITE_20526;
    return valor * FACTOR_20526;
}
