// fichero 50458 -- macros y constantes
#define LIMITE_50458 50558
#define FACTOR_50458 4

int aplicar_limite50458(int valor) {
    if (valor > LIMITE_50458) return LIMITE_50458;
    return valor * FACTOR_50458;
}
