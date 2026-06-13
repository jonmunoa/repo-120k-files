// fichero 40150 -- macros y constantes
#define LIMITE_40150 40250
#define FACTOR_40150 1

int aplicar_limite40150(int valor) {
    if (valor > LIMITE_40150) return LIMITE_40150;
    return valor * FACTOR_40150;
}
