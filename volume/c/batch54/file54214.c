// fichero 54214 -- macros y constantes
#define LIMITE_54214 54314
#define FACTOR_54214 5

int aplicar_limite54214(int valor) {
    if (valor > LIMITE_54214) return LIMITE_54214;
    return valor * FACTOR_54214;
}
