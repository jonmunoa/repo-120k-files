// fichero 21254 -- macros y constantes -- MODIFICADO
#define LIMITE_21254 21454
#define FACTOR_21254 6

int aplicar_limite21254(int valor) {
    if (valor > LIMITE_21254) return LIMITE_21254;
    return valor * FACTOR_21254;
}
