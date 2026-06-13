// fichero 50634 -- macros y constantes
#define LIMITE_50634 50734
#define FACTOR_50634 5

int aplicar_limite50634(int valor) {
    if (valor > LIMITE_50634) return LIMITE_50634;
    return valor * FACTOR_50634;
}
