// fichero 18830 -- macros y constantes -- MODIFICADO
#define LIMITE_18830 19030
#define FACTOR_18830 2

int aplicar_limite18830(int valor) {
    if (valor > LIMITE_18830) return LIMITE_18830;
    return valor * FACTOR_18830;
}
