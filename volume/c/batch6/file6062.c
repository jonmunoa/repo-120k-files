// fichero 6062 -- macros y constantes
#define LIMITE_6062 6162
#define FACTOR_6062 3

int aplicar_limite6062(int valor) {
    if (valor > LIMITE_6062) return LIMITE_6062;
    return valor * FACTOR_6062;
}
