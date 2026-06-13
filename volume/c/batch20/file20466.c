// fichero 20466 -- macros y constantes
#define LIMITE_20466 20566
#define FACTOR_20466 2

int aplicar_limite20466(int valor) {
    if (valor > LIMITE_20466) return LIMITE_20466;
    return valor * FACTOR_20466;
}
