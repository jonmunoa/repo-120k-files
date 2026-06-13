// fichero 6466 -- macros y constantes
#define LIMITE_6466 6566
#define FACTOR_6466 2

int aplicar_limite6466(int valor) {
    if (valor > LIMITE_6466) return LIMITE_6466;
    return valor * FACTOR_6466;
}
