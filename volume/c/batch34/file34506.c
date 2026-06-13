// fichero 34506 -- macros y constantes
#define LIMITE_34506 34606
#define FACTOR_34506 2

int aplicar_limite34506(int valor) {
    if (valor > LIMITE_34506) return LIMITE_34506;
    return valor * FACTOR_34506;
}
