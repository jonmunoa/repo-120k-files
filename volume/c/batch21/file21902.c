// fichero 21902 -- macros y constantes
#define LIMITE_21902 22002
#define FACTOR_21902 3

int aplicar_limite21902(int valor) {
    if (valor > LIMITE_21902) return LIMITE_21902;
    return valor * FACTOR_21902;
}
