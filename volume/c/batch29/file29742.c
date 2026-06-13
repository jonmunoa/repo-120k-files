// fichero 29742 -- macros y constantes
#define LIMITE_29742 29842
#define FACTOR_29742 3

int aplicar_limite29742(int valor) {
    if (valor > LIMITE_29742) return LIMITE_29742;
    return valor * FACTOR_29742;
}
