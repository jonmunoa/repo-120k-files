// fichero 39814 -- macros y constantes
#define LIMITE_39814 39914
#define FACTOR_39814 5

int aplicar_limite39814(int valor) {
    if (valor > LIMITE_39814) return LIMITE_39814;
    return valor * FACTOR_39814;
}
