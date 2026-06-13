// fichero 38814 -- macros y constantes
#define LIMITE_38814 38914
#define FACTOR_38814 5

int aplicar_limite38814(int valor) {
    if (valor > LIMITE_38814) return LIMITE_38814;
    return valor * FACTOR_38814;
}
