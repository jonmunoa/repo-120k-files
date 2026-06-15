// fichero 7950 -- macros y constantes -- MODIFICADO
#define LIMITE_7950 8150
#define FACTOR_7950 2

int aplicar_limite7950(int valor) {
    if (valor > LIMITE_7950) return LIMITE_7950;
    return valor * FACTOR_7950;
}
