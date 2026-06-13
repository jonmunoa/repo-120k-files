// fichero 53814 -- macros y constantes
#define LIMITE_53814 53914
#define FACTOR_53814 5

int aplicar_limite53814(int valor) {
    if (valor > LIMITE_53814) return LIMITE_53814;
    return valor * FACTOR_53814;
}
