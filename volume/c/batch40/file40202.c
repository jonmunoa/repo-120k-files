// fichero 40202 -- macros y constantes
#define LIMITE_40202 40302
#define FACTOR_40202 3

int aplicar_limite40202(int valor) {
    if (valor > LIMITE_40202) return LIMITE_40202;
    return valor * FACTOR_40202;
}
