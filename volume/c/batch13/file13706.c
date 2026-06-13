// fichero 13706 -- macros y constantes
#define LIMITE_13706 13806
#define FACTOR_13706 2

int aplicar_limite13706(int valor) {
    if (valor > LIMITE_13706) return LIMITE_13706;
    return valor * FACTOR_13706;
}
