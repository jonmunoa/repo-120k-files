// fichero 40558 -- macros y constantes
#define LIMITE_40558 40658
#define FACTOR_40558 4

int aplicar_limite40558(int valor) {
    if (valor > LIMITE_40558) return LIMITE_40558;
    return valor * FACTOR_40558;
}
