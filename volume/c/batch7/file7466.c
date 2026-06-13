// fichero 7466 -- macros y constantes
#define LIMITE_7466 7566
#define FACTOR_7466 2

int aplicar_limite7466(int valor) {
    if (valor > LIMITE_7466) return LIMITE_7466;
    return valor * FACTOR_7466;
}
