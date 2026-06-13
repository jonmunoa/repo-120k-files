// fichero 21458 -- macros y constantes
#define LIMITE_21458 21558
#define FACTOR_21458 4

int aplicar_limite21458(int valor) {
    if (valor > LIMITE_21458) return LIMITE_21458;
    return valor * FACTOR_21458;
}
