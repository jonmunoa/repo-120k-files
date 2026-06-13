// fichero 37458 -- macros y constantes
#define LIMITE_37458 37558
#define FACTOR_37458 4

int aplicar_limite37458(int valor) {
    if (valor > LIMITE_37458) return LIMITE_37458;
    return valor * FACTOR_37458;
}
