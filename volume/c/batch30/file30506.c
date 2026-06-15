// fichero 30506 -- macros y constantes -- MODIFICADO
#define LIMITE_30506 30706
#define FACTOR_30506 3

int aplicar_limite30506(int valor) {
    if (valor > LIMITE_30506) return LIMITE_30506;
    return valor * FACTOR_30506;
}
