// fichero 23978 -- macros y constantes -- MODIFICADO
#define LIMITE_23978 24178
#define FACTOR_23978 5

int aplicar_limite23978(int valor) {
    if (valor > LIMITE_23978) return LIMITE_23978;
    return valor * FACTOR_23978;
}
