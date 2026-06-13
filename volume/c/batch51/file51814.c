// fichero 51814 -- macros y constantes
#define LIMITE_51814 51914
#define FACTOR_51814 5

int aplicar_limite51814(int valor) {
    if (valor > LIMITE_51814) return LIMITE_51814;
    return valor * FACTOR_51814;
}
