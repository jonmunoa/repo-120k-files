// fichero 15814 -- macros y constantes
#define LIMITE_15814 15914
#define FACTOR_15814 5

int aplicar_limite15814(int valor) {
    if (valor > LIMITE_15814) return LIMITE_15814;
    return valor * FACTOR_15814;
}
