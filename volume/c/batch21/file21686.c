// fichero 21686 -- macros y constantes
#define LIMITE_21686 21786
#define FACTOR_21686 2

int aplicar_limite21686(int valor) {
    if (valor > LIMITE_21686) return LIMITE_21686;
    return valor * FACTOR_21686;
}
