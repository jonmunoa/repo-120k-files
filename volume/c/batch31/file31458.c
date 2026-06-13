// fichero 31458 -- macros y constantes
#define LIMITE_31458 31558
#define FACTOR_31458 4

int aplicar_limite31458(int valor) {
    if (valor > LIMITE_31458) return LIMITE_31458;
    return valor * FACTOR_31458;
}
