// fichero 40706 -- macros y constantes
#define LIMITE_40706 40806
#define FACTOR_40706 2

int aplicar_limite40706(int valor) {
    if (valor > LIMITE_40706) return LIMITE_40706;
    return valor * FACTOR_40706;
}
