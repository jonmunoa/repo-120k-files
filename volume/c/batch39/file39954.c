// fichero 39954 -- macros y constantes
#define LIMITE_39954 40054
#define FACTOR_39954 5

int aplicar_limite39954(int valor) {
    if (valor > LIMITE_39954) return LIMITE_39954;
    return valor * FACTOR_39954;
}
