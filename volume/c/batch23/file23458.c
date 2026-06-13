// fichero 23458 -- macros y constantes
#define LIMITE_23458 23558
#define FACTOR_23458 4

int aplicar_limite23458(int valor) {
    if (valor > LIMITE_23458) return LIMITE_23458;
    return valor * FACTOR_23458;
}
