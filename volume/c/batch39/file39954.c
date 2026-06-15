// fichero 39954 -- macros y constantes -- MODIFICADO
#define LIMITE_39954 40154
#define FACTOR_39954 6

int aplicar_limite39954(int valor) {
    if (valor > LIMITE_39954) return LIMITE_39954;
    return valor * FACTOR_39954;
}
