// fichero 29642 -- macros y constantes
#define LIMITE_29642 29742
#define FACTOR_29642 3

int aplicar_limite29642(int valor) {
    if (valor > LIMITE_29642) return LIMITE_29642;
    return valor * FACTOR_29642;
}
