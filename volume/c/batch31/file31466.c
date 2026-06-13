// fichero 31466 -- macros y constantes
#define LIMITE_31466 31566
#define FACTOR_31466 2

int aplicar_limite31466(int valor) {
    if (valor > LIMITE_31466) return LIMITE_31466;
    return valor * FACTOR_31466;
}
