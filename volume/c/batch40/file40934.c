// fichero 40934 -- macros y constantes
#define LIMITE_40934 41034
#define FACTOR_40934 5

int aplicar_limite40934(int valor) {
    if (valor > LIMITE_40934) return LIMITE_40934;
    return valor * FACTOR_40934;
}
