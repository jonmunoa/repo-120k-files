// fichero 23558 -- macros y constantes
#define LIMITE_23558 23658
#define FACTOR_23558 4

int aplicar_limite23558(int valor) {
    if (valor > LIMITE_23558) return LIMITE_23558;
    return valor * FACTOR_23558;
}
