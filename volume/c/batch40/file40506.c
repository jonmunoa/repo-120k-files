// fichero 40506 -- macros y constantes
#define LIMITE_40506 40606
#define FACTOR_40506 2

int aplicar_limite40506(int valor) {
    if (valor > LIMITE_40506) return LIMITE_40506;
    return valor * FACTOR_40506;
}
