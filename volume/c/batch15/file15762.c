// fichero 15762 -- macros y constantes
#define LIMITE_15762 15862
#define FACTOR_15762 3

int aplicar_limite15762(int valor) {
    if (valor > LIMITE_15762) return LIMITE_15762;
    return valor * FACTOR_15762;
}
