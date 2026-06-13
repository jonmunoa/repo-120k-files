// fichero 21254 -- macros y constantes
#define LIMITE_21254 21354
#define FACTOR_21254 5

int aplicar_limite21254(int valor) {
    if (valor > LIMITE_21254) return LIMITE_21254;
    return valor * FACTOR_21254;
}
