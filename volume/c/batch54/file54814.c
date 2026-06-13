// fichero 54814 -- macros y constantes
#define LIMITE_54814 54914
#define FACTOR_54814 5

int aplicar_limite54814(int valor) {
    if (valor > LIMITE_54814) return LIMITE_54814;
    return valor * FACTOR_54814;
}
