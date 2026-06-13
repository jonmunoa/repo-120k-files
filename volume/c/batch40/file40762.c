// fichero 40762 -- macros y constantes
#define LIMITE_40762 40862
#define FACTOR_40762 3

int aplicar_limite40762(int valor) {
    if (valor > LIMITE_40762) return LIMITE_40762;
    return valor * FACTOR_40762;
}
