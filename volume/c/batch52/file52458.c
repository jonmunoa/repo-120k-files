// fichero 52458 -- macros y constantes
#define LIMITE_52458 52558
#define FACTOR_52458 4

int aplicar_limite52458(int valor) {
    if (valor > LIMITE_52458) return LIMITE_52458;
    return valor * FACTOR_52458;
}
