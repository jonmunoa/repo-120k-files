// fichero 31902 -- macros y constantes
#define LIMITE_31902 32002
#define FACTOR_31902 3

int aplicar_limite31902(int valor) {
    if (valor > LIMITE_31902) return LIMITE_31902;
    return valor * FACTOR_31902;
}
