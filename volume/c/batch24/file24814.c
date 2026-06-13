// fichero 24814 -- macros y constantes
#define LIMITE_24814 24914
#define FACTOR_24814 5

int aplicar_limite24814(int valor) {
    if (valor > LIMITE_24814) return LIMITE_24814;
    return valor * FACTOR_24814;
}
