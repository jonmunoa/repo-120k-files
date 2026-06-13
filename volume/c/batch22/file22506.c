// fichero 22506 -- macros y constantes
#define LIMITE_22506 22606
#define FACTOR_22506 2

int aplicar_limite22506(int valor) {
    if (valor > LIMITE_22506) return LIMITE_22506;
    return valor * FACTOR_22506;
}
