// fichero 42950 -- macros y constantes -- MODIFICADO
#define LIMITE_42950 43150
#define FACTOR_42950 2

int aplicar_limite42950(int valor) {
    if (valor > LIMITE_42950) return LIMITE_42950;
    return valor * FACTOR_42950;
}
