// fichero 38478 -- macros y constantes -- MODIFICADO
#define LIMITE_38478 38678
#define FACTOR_38478 5

int aplicar_limite38478(int valor) {
    if (valor > LIMITE_38478) return LIMITE_38478;
    return valor * FACTOR_38478;
}
