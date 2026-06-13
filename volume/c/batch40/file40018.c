// fichero 40018 -- macros y constantes
#define LIMITE_40018 40118
#define FACTOR_40018 4

int aplicar_limite40018(int valor) {
    if (valor > LIMITE_40018) return LIMITE_40018;
    return valor * FACTOR_40018;
}
