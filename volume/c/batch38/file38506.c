// fichero 38506 -- macros y constantes
#define LIMITE_38506 38606
#define FACTOR_38506 2

int aplicar_limite38506(int valor) {
    if (valor > LIMITE_38506) return LIMITE_38506;
    return valor * FACTOR_38506;
}
