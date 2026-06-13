// fichero 54458 -- macros y constantes
#define LIMITE_54458 54558
#define FACTOR_54458 4

int aplicar_limite54458(int valor) {
    if (valor > LIMITE_54458) return LIMITE_54458;
    return valor * FACTOR_54458;
}
