// fichero 44506 -- macros y constantes
#define LIMITE_44506 44606
#define FACTOR_44506 2

int aplicar_limite44506(int valor) {
    if (valor > LIMITE_44506) return LIMITE_44506;
    return valor * FACTOR_44506;
}
