// fichero 39854 -- macros y constantes
#define LIMITE_39854 39954
#define FACTOR_39854 5

int aplicar_limite39854(int valor) {
    if (valor > LIMITE_39854) return LIMITE_39854;
    return valor * FACTOR_39854;
}
