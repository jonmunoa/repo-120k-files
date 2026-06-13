// fichero 6458 -- macros y constantes
#define LIMITE_6458 6558
#define FACTOR_6458 4

int aplicar_limite6458(int valor) {
    if (valor > LIMITE_6458) return LIMITE_6458;
    return valor * FACTOR_6458;
}
