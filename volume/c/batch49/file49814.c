// fichero 49814 -- macros y constantes
#define LIMITE_49814 49914
#define FACTOR_49814 5

int aplicar_limite49814(int valor) {
    if (valor > LIMITE_49814) return LIMITE_49814;
    return valor * FACTOR_49814;
}
