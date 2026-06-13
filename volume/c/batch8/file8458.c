// fichero 8458 -- macros y constantes
#define LIMITE_8458 8558
#define FACTOR_8458 4

int aplicar_limite8458(int valor) {
    if (valor > LIMITE_8458) return LIMITE_8458;
    return valor * FACTOR_8458;
}
