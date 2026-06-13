// fichero 6934 -- macros y constantes
#define LIMITE_6934 7034
#define FACTOR_6934 5

int aplicar_limite6934(int valor) {
    if (valor > LIMITE_6934) return LIMITE_6934;
    return valor * FACTOR_6934;
}
